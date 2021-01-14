/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, WFTrigger;

@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WFTrigger* _templateTrigger;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFTrigger * templateTrigger;              //@synthesize templateTrigger=_templateTrigger - In the implementation block
-(NSString *)subtitle;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 templateTrigger:(id)arg3 ;
-(id)triggerWithConfiguration:(id)arg1 ;
-(WFTrigger *)templateTrigger;
@end

