/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction {

	WFGiphySessionManager* _sessionManager;

}

@property (nonatomic,readonly) WFGiphySessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(WFGiphySessionManager *)sessionManager;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(id)targetContentAttribution;
-(void)runWithNoUserInterface;
@end

