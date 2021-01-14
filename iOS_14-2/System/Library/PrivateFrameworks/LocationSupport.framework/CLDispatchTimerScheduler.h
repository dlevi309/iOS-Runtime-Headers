/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLTimer *)timer;
-(void)setTimer:(CLTimer *)arg1 ;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2 ;
-(id)initWithDispatchSilo:(id)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
@end

