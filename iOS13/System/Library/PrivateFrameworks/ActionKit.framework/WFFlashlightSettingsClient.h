/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>

@class AVFlashlight;

@interface WFFlashlightSettingsClient : WFSettingsClient {

	AVFlashlight* _flashlight;

}

@property (nonatomic,readonly) AVFlashlight * flashlight;              //@synthesize flashlight=_flashlight - In the implementation block
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVFlashlight *)flashlight;
-(id)initWithFlashlight:(id)arg1 ;
-(void)turnOffWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)turnOnWithBrightnessLevel:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)toggleWithBrightnessLevel:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

