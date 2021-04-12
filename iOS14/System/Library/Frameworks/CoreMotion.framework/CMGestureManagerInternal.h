/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMGestureManagerInternal : NSObject {

	int fPriority;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fGestureHandler;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
-(id)initWithPriority:(int)arg1 ;
-(void)startGestureUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopGestureUpdatesPrivate;
-(void)dealloc;
@end

