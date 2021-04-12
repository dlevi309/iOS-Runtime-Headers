/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {

	AVCaptureDeviceManager* m_callback;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)disconnect;
-(id)initWithCallback:(AVCaptureDeviceManager*)arg1 ;
-(void)deviceConnectedDidChange:(id)arg1 ;
@end

