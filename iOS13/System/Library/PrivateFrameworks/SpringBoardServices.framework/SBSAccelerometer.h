/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@protocol SBSAccelerometerDelegate;
@class BKSAccelerometer, NSString;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {

	id<SBSAccelerometerDelegate> _delegate;
	BKSAccelerometer* _bksMirror;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval; 
@property (assign,nonatomic) float xThreshold; 
@property (assign,nonatomic) float yThreshold; 
@property (assign,nonatomic) float zThreshold; 
@property (assign,nonatomic) BOOL orientationEventsEnabled; 
@property (assign,nonatomic,__weak) id<SBSAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SBSAccelerometerDelegate>)delegate;
-(void)setDelegate:(id<SBSAccelerometerDelegate>)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)orientationEventsEnabled;
-(int)currentDeviceOrientation;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
@end

