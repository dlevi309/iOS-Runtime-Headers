/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/WFInputViewMutable.h>

@protocol WFNonViewResponderDelegate;
@class UIView, UIResponder, NSString;

@interface WFNonViewResponder : UIResponder <WFInputViewMutable> {

	UIResponder* _nextResponder;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	id<WFNonViewResponderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFNonViewResponderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * nextResponder;                          //@synthesize nextResponder=_nextResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * inputView;                                          //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                 //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
-(id<WFNonViewResponderDelegate>)delegate;
-(void)setDelegate:(id<WFNonViewResponderDelegate>)arg1 ;
-(UIResponder *)nextResponder;
-(BOOL)resignFirstResponder;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setNextResponder:(UIResponder *)arg1 ;
@end

