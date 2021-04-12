/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/AXCameraTorchManager.h>

@class AVFlashlight, NSString;

@interface VCCameraTorchManager : NSObject <AXCameraTorchManager> {

	AVFlashlight* _flashlight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)turnTorch:(BOOL)arg1 ;
-(BOOL)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
@end

