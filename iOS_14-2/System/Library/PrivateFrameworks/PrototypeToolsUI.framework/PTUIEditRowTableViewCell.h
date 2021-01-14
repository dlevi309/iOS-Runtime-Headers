/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateDisplayedValue;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)numericKeypadDidUpdateValue:(id)arg1 ;
-(void)numericKeypadWillDismiss:(id)arg1 ;
-(id)textForValue:(id)arg1 ;
-(id)valueForText:(id)arg1 ;
@end

