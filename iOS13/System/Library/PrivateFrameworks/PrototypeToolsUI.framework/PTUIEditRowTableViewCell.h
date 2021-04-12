/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <PrototypeToolsUI/PrototypeToolsUI-Structs.h>
#import <PrototypeToolsUI/PTUIRowTableViewCell.h>
#import <libobjc.A.dylib/PTUINumericKeypadDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyleForRow:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)updateDisplayedValue;
-(void)numericKeypadDidUpdateValue:(id)arg1 ;
-(void)numericKeypadWillDismiss:(id)arg1 ;
-(id)textForValue:(id)arg1 ;
-(id)valueForText:(id)arg1 ;
@end

