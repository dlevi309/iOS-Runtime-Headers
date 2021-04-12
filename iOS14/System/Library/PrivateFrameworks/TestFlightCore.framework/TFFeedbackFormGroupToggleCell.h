/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UISwitch *)toggleSwitch;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(TFFeedbackEntryGroupToggle *)groupToggleEntry;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataGroupInclusionBool:(BOOL)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)didUpdateToggleSwitchValue:(id)arg1 ;
-(void)setGroupToggleEntry:(TFFeedbackEntryGroupToggle *)arg1 ;
@end

