/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSArray, VTUIProximityContainerView, UILabel, UIView, VTUIStyle, UIPickerView, VTUIButton, UIButton, NSString;

@interface VTUIProximityEnrollmentLanguageOptionsView : VTUIProximityView <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSArray* _continueButtonsLanguages;
	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UILabel* _settingsLabel;
	UIView* _footerView;
	UIView* _languagesView;
	VTUIStyle* _vtStyle;
	UIPickerView* _languagesPickerView;
	VTUIButton* _continueButton;
	UIButton* _dismissButton;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                         //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) UIPickerView * languagesPickerView;              //@synthesize languagesPickerView=_languagesPickerView - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;                     //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VTUIButton *)continueButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)_setupContent;
-(id)initWithFrame:(CGRect)arg1 languageOptions:(id)arg2 ;
-(UIPickerView *)languagesPickerView;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
@end

