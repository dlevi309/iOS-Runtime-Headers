/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)dateStyle;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKey;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(void)_migrateFromSkiHillWithCoder:(id)arg1 ;
@end

