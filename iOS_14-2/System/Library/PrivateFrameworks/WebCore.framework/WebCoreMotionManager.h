/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class CMMotionManager, CLLocationManager, NSTimer;

@interface WebCoreMotionManager : NSObject {

	CMMotionManager* m_motionManager;
	CLLocationManager* m_locationManager;
	WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter>* m_deviceMotionClients;
	WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter>* m_deviceOrientationClients;
	NSTimer* m_updateTimer;
	BOOL m_gyroAvailable;
	BOOL m_headingAvailable;
	BOOL m_initialized;

}
+(id)sharedManager;
-(id)init;
-(void)addOrientationClient:(MotionManagerClient*)arg1 ;
-(void)removeOrientationClient:(MotionManagerClient*)arg1 ;
-(void)addMotionClient:(MotionManagerClient*)arg1 ;
-(void)removeMotionClient:(MotionManagerClient*)arg1 ;
-(BOOL)headingAvailable;
-(void)initializeOnMainThread;
-(BOOL)gyroAvailable;
-(void)checkClientStatus;
-(void)sendMotionData:(id)arg1 withHeading:(id)arg2 ;
-(void)sendAccelerometerData:(id)arg1 ;
-(void)update;
-(void)dealloc;
@end

