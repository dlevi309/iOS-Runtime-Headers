/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissKeyboard;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
-(UITextField *)textField;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)predefinedLabels;
-(void)setPredefinedLabels:(NSArray *)arg1 ;
-(NSString *)validatedCustomLabelText;
-(void)setValidatedCustomLabelText:(NSString *)arg1 ;
@end

