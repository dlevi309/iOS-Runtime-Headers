/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSString, UITextField, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelListController : PSListController <UITextFieldDelegate> {

	NSArray* _predefinedLabels;
	NSString* _validatedCustomLabelText;
	UITextField* _textField;
	PSUICellularPlanUniversalReference* _planReference;

}

@property (nonatomic,retain) NSArray * predefinedLabels;                                      //@synthesize predefinedLabels=_predefinedLabels - In the implementation block
@property (nonatomic,retain) NSString * validatedCustomLabelText;                             //@synthesize validatedCustomLabelText=_validatedCustomLabelText - In the implementation block
@property (assign,nonatomic,__weak) UITextField * textField;                                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) PSUICellularPlanUniversalReference * planReference;              //@synthesize planReference=_planReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextField *)textField;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dismissKeyboard;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)specifiers;
-(void)setTextField:(UITextField *)arg1 ;
-(NSArray *)predefinedLabels;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
-(void)setPredefinedLabels:(NSArray *)arg1 ;
-(NSString *)validatedCustomLabelText;
-(void)setValidatedCustomLabelText:(NSString *)arg1 ;
@end

