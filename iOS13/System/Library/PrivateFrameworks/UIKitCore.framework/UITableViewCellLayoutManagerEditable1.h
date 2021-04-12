/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManager.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(id)editableTextFieldForCell:(id)arg1 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
-(double)defaultTextFieldFontSizeForCell:(id)arg1 ;
-(void)_textFieldStartEditing:(id)arg1 ;
-(void)_textFieldEndEditing:(id)arg1 ;
-(void)_textFieldEndEditingOnReturn:(id)arg1 ;
-(void)_textValueChanged:(id)arg1 ;
@end

