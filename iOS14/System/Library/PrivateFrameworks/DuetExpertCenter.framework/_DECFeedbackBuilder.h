/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _DECFeedbackBuilder : NSObject {

	/*^block*/id _feedbackHandler;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)receiveFeedback:(id)arg1 result:(id)arg2 metadata:(id)arg3 engaged:(BOOL)arg4 ;
-(id)initWithFeedbackHandler:(/*^block*/id)arg1 ;
@end

