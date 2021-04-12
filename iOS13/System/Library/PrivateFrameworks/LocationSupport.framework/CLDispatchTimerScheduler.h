/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/CLTimerScheduler.h>

@protocol OS_dispatch_source;
@class CLTimer, NSObject;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler> {

	CLTimer* timer;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) CLTimer * timer; 
-(void)dealloc;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(CLTimer *)timer;
-(void)setTimer:(CLTimer *)arg1 ;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2 ;
-(id)initWithDispatchSilo:(id)arg1 ;
@end

