/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARPassiveSensor.h>

@protocol ARSensorDelegate;
@class CMMotionManager, ARDeviceOrientationData, NSOperationQueue, NSString;

@interface ARDeviceOrientationSensor : NSObject <ARPassiveSensor> {

	CMMotionManager* _motionManager;
	ARDeviceOrientationData* _currentOrientationData;
	NSOperationQueue* _errorQueueDeviceMotion;
	double _previousCaptureEndingTimestamp;
	id<ARSensorDelegate> _delegate;
	long long _worldAlignment;

}

@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long worldAlignment;                        //@synthesize worldAlignment=_worldAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(void)dealloc;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)currentData;
-(unsigned long long)providedDataTypes;
-(long long)worldAlignment;
-(id)initWithMotionManager:(id)arg1 alignment:(long long)arg2 ;
@end

