/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOVenueComponentIdentifier.h>
@class NSArray;


@protocol GEOVenueComponentIdentifier <NSObject>
@property (getter=_hasBuildingID,nonatomic,readonly) BOOL hasBuildingID; 
@property (nonatomic,readonly) unsigned long long buildingID; 
@property (nonatomic,readonly) id<GEOVenueFloorInfo> floorInfo; 
@property (nonatomic,readonly) NSArray * sectionIDs; 
@property (getter=_hasUnitID,nonatomic,readonly) BOOL hasUnitID; 
@property (nonatomic,readonly) unsigned long long unitID; 
@property (getter=_hasFixtureID,nonatomic,readonly) BOOL hasFixtureID; 
@property (nonatomic,readonly) unsigned long long fixtureID; 
@required
-(unsigned long long)buildingID;
-(BOOL)_hasBuildingID;
-(id<GEOVenueFloorInfo>)floorInfo;
-(unsigned long long)unitID;
-(BOOL)_hasUnitID;
-(unsigned long long)fixtureID;
-(BOOL)_hasFixtureID;
-(NSArray *)sectionIDs;

@end


@protocol GEOVenueFloorInfo;
@class NSArray, NSString;

@interface GEOVenueComponentIdentifier : NSObject <GEOVenueComponentIdentifier> {

	BOOL _hasBuildingID;
	unsigned long long _buildingID;
	id<GEOVenueFloorInfo> _floorInfo;
	NSArray* _sectionIDs;
	BOOL _hasUnitID;
	unsigned long long _unitID;
	BOOL _hasFixtureID;
	unsigned long long _fixtureID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_hasBuildingID,nonatomic,readonly) BOOL hasBuildingID;              //@synthesize hasBuildingID=_hasBuildingID - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingID;                         //@synthesize buildingID=_buildingID - In the implementation block
@property (nonatomic,readonly) id<GEOVenueFloorInfo> floorInfo;                       //@synthesize floorInfo=_floorInfo - In the implementation block
@property (nonatomic,readonly) NSArray * sectionIDs;                                  //@synthesize sectionIDs=_sectionIDs - In the implementation block
@property (getter=_hasUnitID,nonatomic,readonly) BOOL hasUnitID;                      //@synthesize hasUnitID=_hasUnitID - In the implementation block
@property (nonatomic,readonly) unsigned long long unitID;                             //@synthesize unitID=_unitID - In the implementation block
@property (getter=_hasFixtureID,nonatomic,readonly) BOOL hasFixtureID;                //@synthesize hasFixtureID=_hasFixtureID - In the implementation block
@property (nonatomic,readonly) unsigned long long fixtureID;                          //@synthesize fixtureID=_fixtureID - In the implementation block
-(id)init;
-(unsigned long long)buildingID;
-(BOOL)_hasBuildingID;
-(id<GEOVenueFloorInfo>)floorInfo;
-(unsigned long long)unitID;
-(BOOL)_hasUnitID;
-(unsigned long long)fixtureID;
-(BOOL)_hasFixtureID;
-(NSArray *)sectionIDs;
-(id)initWithBuildingID:(unsigned long long)arg1 ;
-(id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 ;
-(id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 unitID:(unsigned long long)arg3 ;
-(id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 fixtureID:(unsigned long long)arg3 ;
-(id)initWithVenueIdentifier:(id)arg1 ;
@end

