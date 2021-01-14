/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKBalloonTextViewInteractionDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CKBalloonVibrancy.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy> {

	BOOL _containsExcessiveLineHeightCharacters;
	BOOL _ignoreSelectionEvent;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL ignoreSelectionEvent;                               //@synthesize ignoreSelectionEvent=_ignoreSelectionEvent - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL containsExcessiveLineHeightCharacters;              //@synthesize containsExcessiveLineHeightCharacters=_containsExcessiveLineHeightCharacters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKBalloonTextView *)textView;
-(void)prepareForDisplay;
-(void)clearFilters;
-(NSAttributedString *)attributedText;
-(void)setSelected:(BOOL)arg1 withSelectionState:(id)arg2 ;
-(void)addOverlaySubview:(id)arg1 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)truncateForLargeText;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForComposition:(id)arg1 ;
-(BOOL)isSelected;
-(void)setTextView:(CKBalloonTextView *)arg1 ;
-(id)nonVibrantSubViews;
-(void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg1 ;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(BOOL)containsExcessiveLineHeightCharacters;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(void)layoutSubviews;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(void)setContainsExcessiveLineHeightCharacters:(BOOL)arg1 ;
-(UIEdgeInsets)targetTextContainerInsets;
-(BOOL)ignoreSelectionEvent;
-(void)setIgnoreSelectionEvent:(BOOL)arg1 ;
-(double)textViewWidthForWidth:(double)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionStartedLongPressInTextView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionTextView:(id)arg1 userDidDragOutsideViewWithPoint:(CGPoint)arg2 ;
-(void)interactionStartedTapInTextView:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)interactionTextViewShouldCopyToPasteboard:(id)arg1 ;
-(void)restoreFromLargeTextTruncation;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(id)updateTextSelectionState:(id)arg1 forTextSelectionArea:(long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
@end

