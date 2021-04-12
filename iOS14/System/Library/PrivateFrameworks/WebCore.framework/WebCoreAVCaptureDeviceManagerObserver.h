/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {

	AVCaptureDeviceManager* m_callback;

}
-(void)disconnect;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithCallback:(AVCaptureDeviceManager*)arg1 ;
-(void)deviceConnectedDidChange:(id)arg1 ;
@end

