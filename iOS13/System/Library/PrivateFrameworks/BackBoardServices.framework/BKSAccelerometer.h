/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<BKSAccelerometerDelegate>)delegate;
-(void)setDelegate:(id<BKSAccelerometerDelegate>)arg1 ;
-(void)_checkIn;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)orientationEventsEnabled;
-(int)currentDeviceOrientation;
-(id)_orientationEventsThread;
-(void)_checkOut;
-(void)_serverWasRestarted;
-(void)setPassiveOrientationEvents:(BOOL)arg1 ;
-(void)_updateOrientationServer;
-(void)_orientationDidChange;
-(BOOL)passiveOrientationEvents;
@end

