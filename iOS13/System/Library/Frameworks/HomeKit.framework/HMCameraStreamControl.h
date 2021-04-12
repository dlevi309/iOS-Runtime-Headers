/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraControl.h>
#import <libobjc.A.dylib/_HMCameraStreamControlDelegate.h>

@protocol HMCameraStreamControlDelegate;
@class HMFUnfairLock, _HMCameraStreamControl, HMCameraStream, NSString;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {

	HMFUnfairLock* _lock;
	id<HMCameraStreamControlDelegate> _delegate;
	_HMCameraStreamControl* _streamControl;

}

@property (nonatomic,retain) _HMCameraStreamControl * streamControl;                         //@synthesize streamControl=_streamControl - In the implementation block
@property (assign,nonatomic,__weak) id<HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long streamState; 
@property (nonatomic,readonly) HMCameraStream * cameraStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMCameraStreamControlDelegate>)delegate;
-(void)setDelegate:(id<HMCameraStreamControlDelegate>)arg1 ;
-(_HMCameraStreamControl *)streamControl;
-(unsigned long long)streamState;
-(HMCameraStream *)cameraStream;
-(void)startStreamWithPreferences:(id)arg1 ;
-(void)stopStream;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2 ;
-(id)initWithStreamControl:(id)arg1 ;
-(void)startStream;
-(void)setStreamControl:(_HMCameraStreamControl *)arg1 ;
@end

