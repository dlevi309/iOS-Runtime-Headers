/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFConfiguredTriggerRecord, WFTrigger;

@interface WFTriggerSummaryCell : UITableViewCell {

	WFConfiguredTriggerRecord* _triggerRecord;
	WFTrigger* _trigger;

}

@property (nonatomic,retain) WFConfiguredTriggerRecord * triggerRecord;              //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,retain) WFTrigger * trigger;                                    //@synthesize trigger=_trigger - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFTrigger *)trigger;
-(void)setTrigger:(WFTrigger *)arg1 ;
-(void)updateUI;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(void)setTriggerRecord:(WFConfiguredTriggerRecord *)arg1 ;
@end

