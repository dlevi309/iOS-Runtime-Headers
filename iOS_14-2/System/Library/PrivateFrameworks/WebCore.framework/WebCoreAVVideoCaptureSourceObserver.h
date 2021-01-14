/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)disconnect;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithCallback:(AVVideoCaptureSource*)arg1 ;
-(void)deviceConnectedDidChange:(id)arg1 ;
-(void)sessionRuntimeError:(id)arg1 ;
-(void)beginSessionInterrupted:(id)arg1 ;
-(void)endSessionInterrupted:(id)arg1 ;
-(void)removeNotificationObservers;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)addNotificationObservers;
@end

