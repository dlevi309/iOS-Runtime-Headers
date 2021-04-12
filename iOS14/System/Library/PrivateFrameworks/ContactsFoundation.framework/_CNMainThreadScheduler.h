/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface _CNMainThreadScheduler : NSObject <CNScheduler> {

	id<CNScheduler> _inlineScheduler;
	id<CNScheduler> _jumpToMainScheduler;

}

@property (nonatomic,readonly) id<CNScheduler> inlineScheduler;                  //@synthesize inlineScheduler=_inlineScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> jumpToMainScheduler;              //@synthesize jumpToMainScheduler=_jumpToMainScheduler - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)schedulerForImmediateExecution;
-(id)schedulerForDelayedExecution;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)jumpToMainScheduler;
@end

