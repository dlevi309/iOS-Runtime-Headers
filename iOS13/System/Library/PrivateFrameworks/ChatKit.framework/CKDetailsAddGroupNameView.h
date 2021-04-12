/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol CKDetailsAddGroupNameViewDelegate;
@class NSString, UILabel, CKDetailsViewAddGroupNameViewUITextField;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate> {

	BOOL _enabled;
	id<CKDetailsAddGroupNameViewDelegate> _delegate;
	NSString* _groupName;
	UILabel* _placeholderLabel;
	CKDetailsViewAddGroupNameViewUITextField* _inputField;

}

@property (nonatomic,retain) UILabel * placeholderLabel;                                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) CKDetailsViewAddGroupNameViewUITextField * inputField;              //@synthesize inputField=_inputField - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsAddGroupNameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                 //@synthesize groupName=_groupName - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CKDetailsAddGroupNameViewDelegate>)delegate;
-(void)setDelegate:(id<CKDetailsAddGroupNameViewDelegate>)arg1 ;
-(BOOL)isEnabled;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(CKDetailsViewAddGroupNameViewUITextField *)inputField;
-(void)commitGroupName;
-(void)setInputField:(CKDetailsViewAddGroupNameViewUITextField *)arg1 ;
@end

