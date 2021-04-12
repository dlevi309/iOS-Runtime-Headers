/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockComplications/CLKCComplication.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTKComplication : CLKCComplication <NSSecureCoding, NSCopying> {

	unsigned long long _complicationType;

}

@property (nonatomic,readonly) unsigned long long complicationType;              //@synthesize complicationType=_complicationType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)anyComplicationOfType:(unsigned long long)arg1 ;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
+(id)nullComplication;
+(id)allComplicationsOfType:(unsigned long long)arg1 ;
+(Class)_complicationClassForType:(unsigned long long)arg1 ;
+(id)complicationWithJSONObjectRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(unsigned long long)complicationType;
-(id)localizedRichDetailText;
-(id)localizedDetailText;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 subclassesAllowed:(BOOL)arg2 ;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKey;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)localizedRichKeylineLabelText;
-(void)_setComplicationType:(unsigned long long)arg1 ;
@end

