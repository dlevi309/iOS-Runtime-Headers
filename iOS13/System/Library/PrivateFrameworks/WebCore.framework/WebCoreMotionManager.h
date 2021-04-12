/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class CMMotionManager, CLLocationManager, NSTimer;

@interface WebCoreMotionManager : NSObject {

	CMMotionManager* m_motionManager;
	CLLocationManager* m_locationManager;
	WeakHashSet<WebCore::MotionManagerClient>* m_deviceMotionClients;
	WeakHashSet<WebCore::MotionManagerClient>* m_deviceOrientationClients;
	NSTimer* m_updateTimer;
	BOOL m_gyroAvailable;
	BOOL m_headingAvailable;
	BOOL m_initialized;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)update;
-(BOOL)headingAvailable;
-(void)addOrientationClient:(MotionManagerClient*)arg1 ;
-(void)removeOrientationClient:(MotionManagerClient*)arg1 ;
-(void)addMotionClient:(MotionManagerClient*)arg1 ;
-(void)removeMotionClient:(MotionManagerClient*)arg1 ;
-(BOOL)gyroAvailable;
-(void)initializeOnMainThread;
-(void)checkClientStatus;
-(void)sendMotionData:(id)arg1 withHeading:(id)arg2 ;
-(void)sendAccelerometerData:(id)arg1 ;
@end

