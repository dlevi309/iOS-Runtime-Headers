/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMOnBodyStatusManager : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fSubscribedToOnBodyStatusDetection;
	NSObject*<OS_dispatch_queue> fOnBodyStatusQueue;
	/*^block*/id fOnBodyStatusHandler;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
+(BOOL)isOnBodyStatusDetectionAvailable;
+(id)sharedOnBodyStatusManager;
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)connect;
-(void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetectionPrivate;
-(void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetection;
-(void)setPropertiesWithDictionary:(id)arg1 ;
@end

