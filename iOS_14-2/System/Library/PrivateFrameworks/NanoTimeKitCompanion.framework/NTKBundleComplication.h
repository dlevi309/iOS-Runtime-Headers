/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKCBundleComplication;

@interface NTKBundleComplication : NTKComplication {

	CLKCBundleComplication* _complication;

}

@property (nonatomic,readonly) CLKCBundleComplication * complication;              //@synthesize complication=_complication - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
+(id)bundledComplicationWithComplication:(id)arg1 ;
+(id)_revertedBundleComplicationFromJSONDictionary:(id)arg1 ;
-(id)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLKCBundleComplication *)complication;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(id)localizedRichDetailText;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)localizedRichKeylineLabelText;
@end

