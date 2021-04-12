/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@protocol CKDeviceOrientationManagerDelegate;
@class BKSAccelerometer, NSMutableSet, NSString;

@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate> {

	id<CKDeviceOrientationManagerDelegate> _delegate;
	BKSAccelerometer* _accelerometer;
	NSMutableSet* _listenerKeys;

}

@property (nonatomic,retain) BKSAccelerometer * accelerometer;                                                         //@synthesize accelerometer=_accelerometer - In the implementation block
@property (nonatomic,retain) NSMutableSet * listenerKeys;                                                              //@synthesize listenerKeys=_listenerKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CKDeviceOrientationManagerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isListeningForOrientationEvents,nonatomic,readonly) BOOL listeningForOrientationEvents; 
@property (nonatomic,readonly) long long currentDeviceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentDeviceOrientation;
-(id)init;
-(id<CKDeviceOrientationManagerDelegate>)delegate;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDelegate:(id<CKDeviceOrientationManagerDelegate>)arg1 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2 ;
-(void)beginListeningForOrientationEventsWithKey:(id)arg1 ;
-(void)endListeningForOrientationEventsWithKey:(id)arg1 ;
-(BOOL)isListeningForOrientationEvents;
-(void)invalidate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(NSMutableSet *)listenerKeys;
-(void)_updateListeningState;
-(long long)_springboardDeviceLockOrientation;
-(BKSAccelerometer *)accelerometer;
-(BOOL)_wantsOrientationEvents;
-(void)_broadcastOrientation:(long long)arg1 ;
-(void)setAccelerometer:(BKSAccelerometer *)arg1 ;
-(void)setListenerKeys:(NSMutableSet *)arg1 ;
-(void)dealloc;
@end

