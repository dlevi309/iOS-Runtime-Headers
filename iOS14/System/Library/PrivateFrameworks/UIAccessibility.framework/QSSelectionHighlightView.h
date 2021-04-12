/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView {

	BOOL _sentenceHighlight;
	NSArray* _highlightSelectionRects;
	UIColor* _selectionColor;
	UIColor* _underlineColor;

}

@property (nonatomic,retain) NSArray * highlightSelectionRects;              //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                       //@synthesize selectionColor=_selectionColor - In the implementation block
@property (nonatomic,retain) UIColor * underlineColor;                       //@synthesize underlineColor=_underlineColor - In the implementation block
@property (assign,nonatomic) BOOL sentenceHighlight;                         //@synthesize sentenceHighlight=_sentenceHighlight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)sentenceHighlight;
-(UIColor *)underlineColor;
-(NSArray *)highlightSelectionRects;
-(UIColor *)selectionColor;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(void)setUnderlineColor:(UIColor *)arg1 ;
-(void)setSentenceHighlight:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

