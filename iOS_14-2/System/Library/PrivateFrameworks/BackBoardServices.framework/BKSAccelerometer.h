/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@protocol BKSAccelerometerDelegate;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class NSLock, NSThread;

@interface BKSAccelerometer : NSObject {

	id<BKSAccelerometerDelegate> _delegate;
	CFRunLoopSourceRef _accelerometerEventsSource;
	CFRunLoopRef _accelerometerEventsRunLoop;
	double _updateInterval;
	NSLock* _lock;
	int _orientationCheckToken;
	int _orientationNotificationsToken;
	NSThread* _orientationEventsThread;
	unsigned _orientationPort;
	BOOL _passiveOrientationEvents;
	BOOL _orientationEventsEnabled;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval;                                     //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) float xThreshold;                                          //@synthesize xThreshold=_xThreshold - In the implementation block
@property (assign,nonatomic) float yThreshold;                                          //@synthesize yThreshold=_yThreshold - In the implementation block
@property (assign,nonatomic) float zThreshold;                                          //@synthesize zThreshold=_zThreshold - In the implementation block
@property (assign,nonatomic) BOOL passiveOrientationEvents;                             //@synthesize passiveOrientationEvents=_passiveOrientationEvents - In the implementation block
@property (assign,nonatomic) BOOL orientationEventsEnabled;                             //@synthesize orientationEventsEnabled=_orientationEventsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<BKSAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_checkOut;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(long long)currentDeviceOrientation;
-(id)init;
-(id<BKSAccelerometerDelegate>)delegate;
-(void)_checkIn;
-(float)xThreshold;
-(void)setZThreshold:(float)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(void)setXThreshold:(float)arg1 ;
-(void)_serverWasRestarted;
-(BOOL)passiveOrientationEvents;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<BKSAccelerometerDelegate>)arg1 ;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(float)yThreshold;
-(void)setPassiveOrientationEvents:(BOOL)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(BOOL)orientationEventsEnabled;
-(void)_orientationDidChange;
-(void)_updateOrientationServer;
-(id)_orientationEventsThread;
-(float)zThreshold;
-(void)dealloc;
@end

