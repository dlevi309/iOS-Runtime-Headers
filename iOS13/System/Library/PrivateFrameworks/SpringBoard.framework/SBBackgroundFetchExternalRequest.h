/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject {

	SBBackgroundFetchTask* _task;
	UIFetchContentInBackgroundAction* _action;

}

@property (nonatomic,readonly) UIFetchContentInBackgroundAction * action;              //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(UIFetchContentInBackgroundAction *)action;
-(void)execute;
-(id)initForBundleID:(id)arg1 ;
@end

