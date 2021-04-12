/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction {

	WFGiphySessionManager* _sessionManager;

}

@property (nonatomic,readonly) WFGiphySessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
-(WFGiphySessionManager *)sessionManager;
-(void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2 ;
-(id)targetDataInfo;
-(void)runWithNoUserInterface;
@end

