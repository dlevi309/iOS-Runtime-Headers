/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol WFTextAttachmentInteractionDelegate;
@class UIView, NSTextContainer, UITapGestureRecognizer, NSString;

@interface WFTextAttachmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	id<WFTextAttachmentInteractionDelegate> _delegate;
	NSTextContainer* _textContainer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIEdgeInsets _textContainerInset;

}

@property (assign,nonatomic,__weak) UITapGestureRecognizer * tapGestureRecognizer;                 //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<WFTextAttachmentInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSTextContainer * textContainer;                                      //@synthesize textContainer=_textContainer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textContainerInset;                                      //@synthesize textContainerInset=_textContainerInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                               //@synthesize view=_view - In the implementation block
-(void)dealloc;
-(id<WFTextAttachmentInteractionDelegate>)delegate;
-(void)setDelegate:(id<WFTextAttachmentInteractionDelegate>)arg1 ;
-(id)layoutManager;
-(id)textStorage;
-(NSTextContainer *)textContainer;
-(UIView *)view;
-(UIEdgeInsets)textContainerInset;
-(void)setTextContainer:(NSTextContainer *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)attachmentAtPoint:(CGPoint)arg1 characterRange:(out NSRange*)arg2 ;
-(void)handleTextTap:(id)arg1 ;
@end

