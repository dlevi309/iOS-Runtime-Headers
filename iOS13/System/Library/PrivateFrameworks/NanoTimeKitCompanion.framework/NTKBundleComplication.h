/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bundledComplicationWithComplication:(id)arg1 ;
+(id)_revertedBundleComplicationFromJSONDictionary:(id)arg1 ;
+(id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLKCBundleComplication *)complication;
-(id)localizedRichDetailText;
-(id)localizedDetailText;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)customDailySnapshotKey;
-(id)localizedRichKeylineLabelText;
@end

