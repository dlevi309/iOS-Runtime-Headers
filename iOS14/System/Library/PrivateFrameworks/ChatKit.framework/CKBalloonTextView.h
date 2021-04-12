/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol CKBalloonTextViewInteractionDelegate;
@class NSAttributedString, UITapGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {

	BOOL _fakeSelected;
	NSAttributedString* _attributedText;
	id<CKBalloonTextViewInteractionDelegate> _interactionDelegate;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _dragGestureRecognizer;
	NSRange __selectedRange;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                                                //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * dragGestureRecognizer;                                   //@synthesize dragGestureRecognizer=_dragGestureRecognizer - In the implementation block
@property (assign,nonatomic) NSRange _selectedRange;                                                           //@synthesize _selectedRange=__selectedRange - In the implementation block
@property (assign,nonatomic,__weak) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,getter=isFakeSelected,nonatomic) BOOL fakeSelected;                                          //@synthesize fakeSelected=_fakeSelected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textView;
-(void)copy:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSAttributedString *)attributedText;
-(void)setInteractionDelegate:(id<CKBalloonTextViewInteractionDelegate>)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<CKBalloonTextViewInteractionDelegate>)interactionDelegate;
-(void)setDragGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id)_textWithHyphenationAppliedForAttributedText:(id)arg1 ;
-(UIPanGestureRecognizer *)dragGestureRecognizer;
-(void)_setFakeSelectionBackgroundColorForRange:(NSRange)arg1 ;
-(id)_fakeSelectionBackgroundColor;
-(void)_removeFakeSelectionBackgroundColorForRange:(NSRange)arg1 ;
-(void)_setFakeSelectionBackgroundColor;
-(void)set_selectedRange:(NSRange)arg1 ;
-(void)_removeFakeSelectionBackgroundColor;
-(void)_updateFakeSelectionBackgroundColor:(id)arg1 ;
-(NSString *)description;
-(void)didMoveToWindow;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 isReplyPreview:(BOOL)arg4 ;
-(void)setFakeSelected:(BOOL)arg1 ;
-(void)setBalloonTextSelectedRange:(NSRange)arg1 ;
-(BOOL)isFakeSelected;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(BOOL)_showsEditMenu;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(NSRange)_selectedRange;
-(void)panGestureRecognized:(id)arg1 ;
-(void)registerForEvents;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

