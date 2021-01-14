/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/WFInputViewMutable.h>

@protocol WFNonViewResponderDelegate;
@class UIResponder, UIView, NSString;

@interface WFNonViewResponder : UIResponder <WFInputViewMutable> {

	UIResponder* _nextResponder;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	id<WFNonViewResponderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFNonViewResponderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * nextResponder;                          //@synthesize nextResponder=_nextResponder - In the implementation block
@property (nonatomic,retain) UIView * inputView;                                          //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                 //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)inputAccessoryView;
-(BOOL)resignFirstResponder;
-(UIResponder *)nextResponder;
-(id<WFNonViewResponderDelegate>)delegate;
-(void)setNextResponder:(UIResponder *)arg1 ;
-(void)setInputView:(UIView *)arg1 ;
-(UIView *)inputView;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<WFNonViewResponderDelegate>)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
@end

