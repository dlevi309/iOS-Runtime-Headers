/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDailyRoutineShortcutSetupQuestion.h>

@class NSArray, NSString, WFImage, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion;

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion {

	NSArray* _actions;
	NSString* _addButtonTitle;
	NSString* _skipButtonTitle;
	WFImage* _icon;
	WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion* _followUpQuestion;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                                                   //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSString * addButtonTitle;                                                                    //@synthesize addButtonTitle=_addButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * skipButtonTitle;                                                                   //@synthesize skipButtonTitle=_skipButtonTitle - In the implementation block
@property (nonatomic,retain) WFImage * icon;                                                                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion * followUpQuestion;              //@synthesize followUpQuestion=_followUpQuestion - In the implementation block
-(NSArray *)actions;
-(WFImage *)icon;
-(void)setIcon:(WFImage *)arg1 ;
-(void)setSkipButtonTitle:(NSString *)arg1 ;
-(void)setAddButtonTitle:(NSString *)arg1 ;
-(id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3 ;
-(void)setFollowUpQuestion:(WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *)arg1 ;
-(NSString *)addButtonTitle;
-(NSString *)skipButtonTitle;
-(WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *)followUpQuestion;
@end

