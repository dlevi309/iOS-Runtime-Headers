/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

@class UISwitch, TFFeedbackEntryGroupToggle;

@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell {

	UISwitch* _toggleSwitch;
	TFFeedbackEntryGroupToggle* _groupToggleEntry;

}

@property (nonatomic,readonly) UISwitch * toggleSwitch;                                  //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (nonatomic,retain) TFFeedbackEntryGroupToggle * groupToggleEntry;              //@synthesize groupToggleEntry=_groupToggleEntry - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)toggleSwitch;
-(TFFeedbackEntryGroupToggle *)groupToggleEntry;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataGroupInclusionBool:(BOOL)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)didUpdateToggleSwitchValue:(id)arg1 ;
-(void)setGroupToggleEntry:(TFFeedbackEntryGroupToggle *)arg1 ;
@end

