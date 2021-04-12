/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFSettingsCell.h>

@class WFWorkflowImportQuestion;

@interface WFImportQuestionsEditTableViewCell : WFSettingsCell {

	WFWorkflowImportQuestion* _question;

}

@property (assign,nonatomic,__weak) WFWorkflowImportQuestion * question;              //@synthesize question=_question - In the implementation block
+(long long)cellStyle;
-(WFWorkflowImportQuestion *)question;
-(void)setQuestion:(WFWorkflowImportQuestion *)arg1 ;
@end

