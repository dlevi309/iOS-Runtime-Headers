/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARPassiveSensor.h>

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
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ARSensorDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(id)currentData;
-(void)dealloc;
-(unsigned long long)providedDataTypes;
-(long long)worldAlignment;
-(id)initWithMotionManager:(id)arg1 alignment:(long long)arg2 ;
@end

