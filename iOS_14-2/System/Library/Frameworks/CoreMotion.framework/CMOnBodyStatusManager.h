/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedOnBodyStatusManager;
+(BOOL)isOnBodyStatusDetectionAvailable;
-(void)disconnect;
-(void)stopOnBodyStatusDetectionPrivate;
-(id)init;
-(void)connect;
-(void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetection;
-(void)setPropertiesWithDictionary:(id)arg1 ;
-(void)dealloc;
@end

