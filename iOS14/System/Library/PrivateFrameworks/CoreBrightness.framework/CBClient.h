/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@class BrightnessSystemClient, CBBlueLightClient, CBAdaptationClient;

@interface CBClient : NSObject {

	BrightnessSystemClient* bsc;
	CBBlueLightClient* _blueLightClient;
	CBAdaptationClient* _adaptationClient;

}

@property (readonly) CBBlueLightClient * blueLightClient;                //@synthesize blueLightClient=_blueLightClient - In the implementation block
@property (readonly) CBAdaptationClient * adaptationClient;              //@synthesize adaptationClient=_adaptationClient - In the implementation block
+(BOOL)supportsBlueLightReduction;
+(BOOL)supportsAdaptation;
-(id)init;
-(CBBlueLightClient *)blueLightClient;
-(CBAdaptationClient *)adaptationClient;
-(void)dealloc;
@end

