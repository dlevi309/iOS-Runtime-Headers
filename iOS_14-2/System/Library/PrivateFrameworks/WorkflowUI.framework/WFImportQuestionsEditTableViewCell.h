/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

