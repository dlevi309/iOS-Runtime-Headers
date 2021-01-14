/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class WorldClockCity;

@interface NTKWorldClockComplication : NTKComplication {

	WorldClockCity* _city;

}

@property (nonatomic,readonly) WorldClockCity * city;              //@synthesize city=_city - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
+(id)_allCities;
-(WorldClockCity *)city;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)localizedRichDetailText;
-(void)_handleAddedFromFaceSharing;
-(id)localizedRichKeylineLabelText;
@end

