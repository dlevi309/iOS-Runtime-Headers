/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@protocol OS_dispatch_source;
@class NSObject, WFAutoIncrementingProgress;

@interface WFDelayAction : WFAction {

	NSObject*<OS_dispatch_source> _timer;
	WFAutoIncrementingProgress* _delayProgress;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) WFAutoIncrementingProgress * delayProgress;              //@synthesize delayProgress=_delayProgress - In the implementation block
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(WFAutoIncrementingProgress *)delayProgress;
-(void)setDelayProgress:(WFAutoIncrementingProgress *)arg1 ;
@end

