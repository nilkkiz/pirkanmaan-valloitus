#ifndef MINE_H
#define MINE_H

#include "buildings/buildingbase.h"
#include "studentresourcemaps.h"


namespace Student {

/**
 * @brief The Mine class represents a mine-building in the game.
 */
class Mine : public Course::BuildingBase
{
public:
    /**
     * @brief Disabled parameterless constructor.
     */
    Mine() = delete;

    /**
     * @brief Constructor for the class.
     *
     * @param eventhandler points to the student's GameEventHandler.
     * @param owner points to the owning player.
     * @param tile points to the tile upon which the building is constructed.
     *
     * @post Exception Guarantee: No guarantee.
     * @exception OwnerConflict - if the building conflicts with tile's
     * ownership.
     */
    explicit Mine(
            const std::shared_ptr<Course::iGameEventHandler>& eventhandler,
            const std::shared_ptr<Course::iObjectManager>& objectmanager,
            const std::shared_ptr<Course::PlayerBase>& owner,
            const int& tilespaces = 1,
            const Course::ResourceMap& buildcost = Student::ConstResourceMaps::MINE_BUILD_COST,
            const Course::ResourceMap& production = Student::ConstResourceMaps::MINE_PRODUCTION
            );

    /**
     * @brief Default destructor.
     */
    virtual ~Mine() = default;

    /**
     * @copydoc GameObject::getType()
     */
    virtual std::string getType() const override;

}; // class Mine

} // namespace Student


#endif // MINE_H
