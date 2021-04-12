/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@class NSString;

@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVVideoCaptureSource* m_callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)disconnect;
-(id)initWithCallback:(AVVideoCaptureSource*)arg1 ;
-(void)deviceConnectedDidChange:(id)arg1 ;
-(void)addNotificationObservers;
-(void)removeNotificationObservers;
-(void)sessionRuntimeError:(id)arg1 ;
-(void)beginSessionInterrupted:(id)arg1 ;
-(void)endSessionInterrupted:(id)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

