/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
@class NSObject, RMConnectionClient, NSOperationQueue, CMDeviceMotion, CMAttitude;

@interface CMHeadphoneMotionManagerInternal : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RMConnectionClient* _connectionClient;
	NSOperationQueue* _callbackQueue;
	/*^block*/id _callbackHandler;
	BOOL _deviceMotionActive;
	BOOL _deviceMotionStreaming;
	BOOL _deviceConnected;
	double _deviceMotionStartTime;
	CMDeviceMotion* _deviceMotion;
	CMAttitude* _initialReferenceAttitude;

}

@property (retain) CMDeviceMotion * deviceMotion;                                //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (nonatomic,retain) CMAttitude * initialReferenceAttitude;              //@synthesize initialReferenceAttitude=_initialReferenceAttitude - In the implementation block
-(void)disconnect;
-(id)init;
-(void)connect;
-(void)setDeviceMotion:(CMDeviceMotion *)arg1 ;
-(CMAttitude *)initialReferenceAttitude;
-(void)setInitialReferenceAttitude:(CMAttitude *)arg1 ;
-(CMDeviceMotion *)deviceMotion;
-(void)dealloc;
@end

