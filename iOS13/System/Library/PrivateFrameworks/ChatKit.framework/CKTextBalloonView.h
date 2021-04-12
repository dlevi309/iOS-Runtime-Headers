/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKBalloonTextViewInteractionDelegate.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate> {

	BOOL _centerTextWhenSkinny;
	BOOL _containsExcessiveLineHeightCharacters;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL centerTextWhenSkinny;                               //@synthesize centerTextWhenSkinny=_centerTextWhenSkinny - In the implementation block
@property (assign,nonatomic) BOOL containsExcessiveLineHeightCharacters;              //@synthesize containsExcessiveLineHeightCharacters=_containsExcessiveLineHeightCharacters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)prepareForReuse;
-(CKBalloonTextView *)textView;
-(void)setTextView:(CKBalloonTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)configureForComposition:(id)arg1 ;
-(BOOL)containsExcessiveLineHeightCharacters;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setContainsExcessiveLineHeightCharacters:(BOOL)arg1 ;
-(void)setCenterTextWhenSkinny:(BOOL)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1 ;
-(double)textViewWidthForWidth:(double)arg1 ;
-(void)truncateForLargeText;
-(void)restoreFromLargeTextTruncation;
-(BOOL)centerTextWhenSkinny;
@end

