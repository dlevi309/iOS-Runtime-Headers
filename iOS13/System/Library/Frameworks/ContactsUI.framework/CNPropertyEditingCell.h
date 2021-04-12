/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIButton, CNRepeatingGradientSeparatorView, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate> {

	UIButton* _labelButton;
	CNRepeatingGradientSeparatorView* _vseparator;

}

@property (nonatomic,retain) CNRepeatingGradientSeparatorView * vseparator;              //@synthesize vseparator=_vseparator - In the implementation block
@property (nonatomic,readonly) UIButton * labelButton;                                   //@synthesize labelButton=_labelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
+(BOOL)wantsStandardConstraints;
-(void)dealloc;
-(id)valueString;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)labelView;
-(id)variableConstraints;
-(double)minCellHeight;
-(id)constantConstraints;
-(void)picker:(id)arg1 didDeleteItem:(id)arg2 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(double)leftValueMargin;
-(double)effectiveLabelWidth;
-(void)setVseparatorHidden:(BOOL)arg1 ;
-(void)regainFocus;
-(UIButton *)labelButton;
-(CNRepeatingGradientSeparatorView *)vseparator;
-(void)setVseparator:(CNRepeatingGradientSeparatorView *)arg1 ;
@end

