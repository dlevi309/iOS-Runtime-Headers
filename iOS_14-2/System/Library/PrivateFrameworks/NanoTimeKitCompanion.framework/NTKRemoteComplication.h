/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString, CLKComplicationDescriptor;

@interface NTKRemoteComplication : NTKComplication {

	NSString* _clientIdentifier;
	NSString* _appBundleIdentifier;
	CLKComplicationDescriptor* _complicationDescriptor;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                                  //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) CLKComplicationDescriptor * complicationDescriptor;              //@synthesize complicationDescriptor=_complicationDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
+(id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3 ;
+(id)_remoteStocksComplicationForDevice:(id)arg1 ;
+(id)remoteStocksComplicationDescriptorForDevice:(id)arg1 ;
-(id)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLKComplicationDescriptor *)complicationDescriptor;
-(id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(BOOL)arg2 ;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(id)localizedRichDetailText;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)localizedRichKeylineLabelText;
-(id)_generatUniqueIdentifier;
-(id)companionLocalizedKeylineLabelText;
-(void)resetComplicationDescriptor;
-(id)watchLocalizedKeylineLabelText;
@end

