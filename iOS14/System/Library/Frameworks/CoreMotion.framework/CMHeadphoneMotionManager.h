/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol CMHeadphoneMotionManagerDelegate;
@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;

@interface CMHeadphoneMotionManager : NSObject {

	CMHeadphoneMotionManagerInternal* _internal;
	id<CMHeadphoneMotionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CMHeadphoneMotionManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDeviceMotionAvailable,nonatomic,readonly) BOOL deviceMotionAvailable; 
@property (getter=isDeviceMotionActive,nonatomic,readonly) BOOL deviceMotionActive; 
@property (readonly) CMDeviceMotion * deviceMotion; 
+(long long)authorizationStatus;
-(id)init;
-(id<CMHeadphoneMotionManagerDelegate>)delegate;
-(void)stopDeviceMotionUpdates;
-(void)pauseDeviceMotionStreamingPrivate;
-(void)resumeDeviceMotionStreamingPrivate;
-(void)startDeviceMotionUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)onDeviceMotionPrivate:(id)arg1 ;
-(void)onDeviceMotionEventPrivate:(id)arg1 ;
-(void)applyInitialReferencePrivate:(id)arg1 ;
-(void)notifyDeviceConnectedEventToClientPrivate;
-(id)delegateQueuePrivate;
-(void)notifyDeviceDisconnectedEventToClientPrivate;
-(void)setDelegate:(id<CMHeadphoneMotionManagerDelegate>)arg1 ;
-(void)stopDeviceMotionUpdatesPrivate;
-(BOOL)isDeviceMotionAvailable;
-(BOOL)isDeviceMotionActive;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(CMDeviceMotion *)deviceMotion;
-(void)dealloc;
@end

