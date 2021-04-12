/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFSlotTemplateTextStorageDelegate.h>
#import <libobjc.A.dylib/WFSlotTemplateTypingTextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WFTextAttachmentInteractionDelegate.h>

@protocol WFSlotTemplateViewDelegate;
@class WFSlotIdentifier, NSTextContainer, WFSlotTemplateTextStorage, WFSlotTemplateLayoutManager, WFTextAttachmentInteraction, WFSlotTemplateTypingTextView, NSArray, UIFont, UIColor, NSParagraphStyle, NSString;

@interface WFSlotTemplateView : UIView <WFSlotTemplateTextStorageDelegate, WFSlotTemplateTypingTextViewDelegate, UIGestureRecognizerDelegate, WFTextAttachmentInteractionDelegate> {

	BOOL _enabled;
	BOOL _typingAllowsMultipleLines;
	id<WFSlotTemplateViewDelegate> _delegate;
	double _horizontalPadding;
	WFSlotIdentifier* _typingSlotIdentifier;
	NSTextContainer* _textContainer;
	WFSlotTemplateTextStorage* _textStorage;
	WFSlotTemplateLayoutManager* _layoutManager;
	WFTextAttachmentInteraction* _attachmentInteraction;
	WFSlotTemplateTypingTextView* _typingTextView;
	NSTextContainer* _typingTextContainer;
	WFSlotTemplateLayoutManager* _typingLayoutManager;
	WFSlotTemplateTextStorage* _typingTextStorage;
	WFTextAttachmentInteraction* _typingAttachmentInteraction;
	unsigned long long _lastLayoutManagerLineCount;
	NSArray* _accessibilityElements;

}

@property (nonatomic,retain) NSTextContainer * textContainer;                                        //@synthesize textContainer=_textContainer - In the implementation block
@property (nonatomic,retain) WFSlotTemplateTextStorage * textStorage;                                //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,retain) WFSlotTemplateLayoutManager * layoutManager;                            //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,retain) WFTextAttachmentInteraction * attachmentInteraction;                    //@synthesize attachmentInteraction=_attachmentInteraction - In the implementation block
@property (nonatomic,retain) WFSlotTemplateTypingTextView * typingTextView;                          //@synthesize typingTextView=_typingTextView - In the implementation block
@property (nonatomic,retain) NSTextContainer * typingTextContainer;                                  //@synthesize typingTextContainer=_typingTextContainer - In the implementation block
@property (nonatomic,retain) WFSlotTemplateLayoutManager * typingLayoutManager;                      //@synthesize typingLayoutManager=_typingLayoutManager - In the implementation block
@property (nonatomic,retain) WFSlotTemplateTextStorage * typingTextStorage;                          //@synthesize typingTextStorage=_typingTextStorage - In the implementation block
@property (nonatomic,retain) WFTextAttachmentInteraction * typingAttachmentInteraction;              //@synthesize typingAttachmentInteraction=_typingAttachmentInteraction - In the implementation block
@property (assign,nonatomic) BOOL typingAllowsMultipleLines;                                         //@synthesize typingAllowsMultipleLines=_typingAllowsMultipleLines - In the implementation block
@property (assign,nonatomic) unsigned long long lastLayoutManagerLineCount;                          //@synthesize lastLayoutManagerLineCount=_lastLayoutManagerLineCount - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                        //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (assign,nonatomic,__weak) id<WFSlotTemplateViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIFont * unpopulatedFont; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSParagraphStyle * paragraphStyle; 
@property (assign,nonatomic) double horizontalPadding;                                               //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) BOOL extendSlotBackgroundOffEdges; 
@property (nonatomic,readonly) UIColor * disabledSlotTitleColor; 
@property (nonatomic,readonly) UIColor * disabledSlotBackgroundColor; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) WFSlotIdentifier * selectedSlotIdentifier; 
@property (nonatomic,readonly) WFSlotIdentifier * typingSlotIdentifier;                              //@synthesize typingSlotIdentifier=_typingSlotIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForWidth:(double)arg1 withContents:(id)arg2 horizontalPadding:(double)arg3 font:(id)arg4 unpopulatedFont:(id)arg5 paragraphStyle:(id)arg6 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id<WFSlotTemplateViewDelegate>)delegate;
-(void)setDelegate:(id<WFSlotTemplateViewDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)setBounds:(CGRect)arg1 ;
-(WFSlotTemplateLayoutManager *)layoutManager;
-(WFSlotTemplateTextStorage *)textStorage;
-(NSTextContainer *)textContainer;
-(void)setLayoutManager:(WFSlotTemplateLayoutManager *)arg1 ;
-(void)setTextStorage:(WFSlotTemplateTextStorage *)arg1 ;
-(void)setParagraphStyle:(NSParagraphStyle *)arg1 ;
-(void)setTextContainer:(NSTextContainer *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(void)handleTouch:(id)arg1 ;
-(NSParagraphStyle *)paragraphStyle;
-(void)resetTextView;
-(BOOL)textAttachmentInteraction:(id)arg1 shouldRecognizeTapOnTextAttachment:(id)arg2 inCharacterRange:(NSRange)arg3 ;
-(void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(NSRange)arg3 ;
-(void)slotTemplateTypingTextViewDidDelete:(id)arg1 ;
-(void)slotTemplateTypingTextViewDidCut:(id)arg1 withOriginalBlock:(/*^block*/id)arg2 ;
-(void)slotTemplateTypingTextViewDidCopy:(id)arg1 withOriginalBlock:(/*^block*/id)arg2 ;
-(void)slotTemplateTypingTextViewDidPaste:(id)arg1 withOriginalBlock:(/*^block*/id)arg2 ;
-(void)slotTemplateStorageDidInvalidateDisplay:(id)arg1 ;
-(UIFont *)unpopulatedFont;
-(void)setUnpopulatedFont:(UIFont *)arg1 ;
-(id)typingParagraphStyleForParagraphStyle:(id)arg1 ;
-(UIColor *)disabledSlotTitleColor;
-(UIColor *)disabledSlotBackgroundColor;
-(void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)extendSlotBackgroundOffEdges;
-(void)setExtendSlotBackgroundOffEdges:(BOOL)arg1 ;
-(void)setContents:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasSlotWithIdentifier:(id)arg1 ;
-(id)slotWithIdentifier:(id)arg1 ;
-(id)firstSlotIdentifierWithParameterKey:(id)arg1 ;
-(id)selectedSlot;
-(WFSlotIdentifier *)selectedSlotIdentifier;
-(void)selectSlotWithIdentifier:(id)arg1 ;
-(void)_selectSlot:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)deselectSlot;
-(void)_deselectSlotAndNotifyDelegate:(BOOL)arg1 ;
-(void)performFadeTransition:(/*^block*/id)arg1 ;
-(id)slotAtPoint:(CGPoint)arg1 ;
-(CGRect)sourceRectForSlotWithIdentifier:(id)arg1 ;
-(CGRect)sourceRectForSlot:(id)arg1 ;
-(void)updateTintColorInTextStorage;
-(id)slotIdentifierForAttachmentInteraction:(id)arg1 characterRange:(NSRange)arg2 ;
-(void)beginTypingInSlotWithIdentifier:(id)arg1 ;
-(void)positionTypingAboveSlot:(id)arg1 ;
-(void)endTyping;
-(void)updateAccessibilityElements;
-(void)accessibilityShiftFocusBackToView;
-(WFSlotIdentifier *)typingSlotIdentifier;
-(WFTextAttachmentInteraction *)attachmentInteraction;
-(void)setAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 ;
-(WFSlotTemplateTypingTextView *)typingTextView;
-(void)setTypingTextView:(WFSlotTemplateTypingTextView *)arg1 ;
-(NSTextContainer *)typingTextContainer;
-(void)setTypingTextContainer:(NSTextContainer *)arg1 ;
-(WFSlotTemplateLayoutManager *)typingLayoutManager;
-(void)setTypingLayoutManager:(WFSlotTemplateLayoutManager *)arg1 ;
-(WFSlotTemplateTextStorage *)typingTextStorage;
-(void)setTypingTextStorage:(WFSlotTemplateTextStorage *)arg1 ;
-(WFTextAttachmentInteraction *)typingAttachmentInteraction;
-(void)setTypingAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 ;
-(BOOL)typingAllowsMultipleLines;
-(void)setTypingAllowsMultipleLines:(BOOL)arg1 ;
-(unsigned long long)lastLayoutManagerLineCount;
-(void)setLastLayoutManagerLineCount:(unsigned long long)arg1 ;
@end

