/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate> {

	BOOL _showsDoneButton;
	UITextField* _monogramEntry;

}

@property (nonatomic,retain) UITextField * monogramEntry;              //@synthesize monogramEntry=_monogramEntry - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                     //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedTitle;
+(id)localizedDescription;
-(BOOL)showsDoneButton;
-(id)specifiers;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_doneTapped;
-(void)returnPressedAtEnd;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setCustomMonogram:(id)arg1 specifier:(id)arg2 ;
-(id)customMonogram:(id)arg1 ;
-(void)setMonogramEntry:(UITextField *)arg1 ;
-(void)_resetEntryField;
-(UITextField *)monogramEntry;
@end

