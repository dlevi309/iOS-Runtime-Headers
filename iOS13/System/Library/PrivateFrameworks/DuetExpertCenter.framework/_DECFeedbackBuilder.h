/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _DECFeedbackBuilder : NSObject {

	/*^block*/id _feedbackHandler;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithFeedbackHandler:(/*^block*/id)arg1 ;
-(void)receiveFeedback:(id)arg1 result:(id)arg2 metadata:(id)arg3 engaged:(BOOL)arg4 ;
@end

