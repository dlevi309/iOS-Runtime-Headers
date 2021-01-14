/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKDateComplication : NTKComplication {

	unsigned long long _dateStyle;

}

@property (nonatomic,readonly) unsigned long long dateStyle;              //@synthesize dateStyle=_dateStyle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)complicationWithDateStyle:(unsigned long long)arg1 ;
-(unsigned long long)dateStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(BOOL)arg2 ;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(void)_migrateFromSkiHillWithCoder:(id)arg1 ;
@end

