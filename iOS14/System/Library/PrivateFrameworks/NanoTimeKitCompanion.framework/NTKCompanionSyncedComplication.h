/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString, CLKComplicationDescriptor;

@interface NTKCompanionSyncedComplication : NSObject {

	NSString* _companionBundleIdentifier;
	NSString* _fallbackName;
	NSString* _localizedName;
	NSString* _clientIdentifier;
	NSString* _appBundleIdentifier;
	CLKComplicationDescriptor* _descriptor;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                      //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) CLKComplicationDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
-(NSString *)localizedName;
-(NSString *)appBundleIdentifier;
-(CLKComplicationDescriptor *)descriptor;
-(NSString *)clientIdentifier;
-(id)initWithRemoteApplication:(id)arg1 descriptor:(id)arg2 ;
@end

