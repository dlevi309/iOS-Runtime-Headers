/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class WFWorkflow, NSDictionary, UIResponder;

@interface WFComposeUserActivityManager : NSObject {

	BOOL _active;
	WFWorkflow* _workflow;
	NSDictionary* _userInfo;
	UIResponder* _responder;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                     //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * responder;              //@synthesize responder=_responder - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                 //@synthesize active=_active - In the implementation block
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setActive:(BOOL)arg1 ;
-(NSDictionary *)userInfo;
-(BOOL)isActive;
-(void)setResponder:(UIResponder *)arg1 ;
-(UIResponder *)responder;
-(WFWorkflow *)workflow;
-(void)updateUserActivityState:(id)arg1 ;
-(void)dealloc;
-(id)initWithWorkflow:(id)arg1 targetResponder:(id)arg2 ;
@end

