/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UILabel, UITextField, UITableView, NSString, MCQuestionPane;

@interface MCQuestionView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {

	UILabel* _labelAboveField;
	UILabel* _labelBelowField;
	UITextField* _questionField;
	UITableView* _questionTable;
	long long _keyboardType;
	long long _textAutoCaps;
	NSString* _defaultText;
	NSString* _placeholderText;
	BOOL _isPasswordQuestion;
	BOOL _isRequiredQuestion;
	BOOL _isLastQuestion;
	unsigned long long _minimumLength;
	BOOL _isInitialQuestion;
	MCQuestionPane* _ownerPane;

}

@property (assign,nonatomic,__weak) MCQuestionPane * ownerPane;              //@synthesize ownerPane=_ownerPane - In the implementation block
@property (assign,nonatomic) BOOL isInitialQuestion;                         //@synthesize isInitialQuestion=_isInitialQuestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_setStylesOnLabelAboveField;
-(void)_setStylesOnLabelBelowField;
-(MCQuestionPane *)ownerPane;
-(BOOL)isInitialQuestion;
-(void)setTextAboveField:(id)arg1 ;
-(void)setTextBelowField:(id)arg1 ;
-(void)setIsPasswordQuestion:(BOOL)arg1 ;
-(void)setIsRequiredField:(BOOL)arg1 ;
-(void)_textFieldValueChanged:(id)arg1 ;
-(void)_configureQuestionField;
-(void)setIsLastQuestion:(BOOL)arg1 ;
-(void)clearInputField;
-(void)disableInputField;
-(void)enableInputField;
-(void)claimFirstResponder;
-(id)answer;
-(void)setOwnerPane:(MCQuestionPane *)arg1 ;
-(void)setIsInitialQuestion:(BOOL)arg1 ;
@end

