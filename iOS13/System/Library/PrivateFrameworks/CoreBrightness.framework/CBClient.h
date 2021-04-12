/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsAdaptation;
+(BOOL)supportsBlueLightReduction;
-(id)init;
-(void)dealloc;
-(CBAdaptationClient *)adaptationClient;
-(CBBlueLightClient *)blueLightClient;
@end

