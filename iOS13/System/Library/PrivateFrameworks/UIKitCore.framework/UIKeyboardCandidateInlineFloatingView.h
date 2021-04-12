/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface UIKeyboardCandidateInlineFloatingView : UIView {

	BOOL _reducedWidth;
	BOOL _inlineRectIsVertical;
	int _position;
	int _adjustMode;
	NSString* _inlineText;
	double _maxX;
	double _extendedStateAdditionalHeight;
	CGSize _preferredSize;
	CGRect _inlineRect;
	CGRect _previousCollapsedFrame;
	UIEdgeInsets _extraInsets;
	UIEdgeInsets _cellPadding;

}

@property (nonatomic,copy) NSString * inlineText;                                    //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) CGRect inlineRect;                                      //@synthesize inlineRect=_inlineRect - In the implementation block
@property (assign,nonatomic) BOOL inlineRectIsVertical;                              //@synthesize inlineRectIsVertical=_inlineRectIsVertical - In the implementation block
@property (assign,nonatomic) double maxX;                                            //@synthesize maxX=_maxX - In the implementation block
@property (assign,nonatomic) double extendedStateAdditionalHeight;                   //@synthesize extendedStateAdditionalHeight=_extendedStateAdditionalHeight - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                   //@synthesize preferredSize=_preferredSize - In the implementation block
@property (getter=isReducedWidth,nonatomic,readonly) BOOL reducedWidth;              //@synthesize reducedWidth=_reducedWidth - In the implementation block
@property (assign,nonatomic) int position;                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect previousCollapsedFrame;                          //@synthesize previousCollapsedFrame=_previousCollapsedFrame - In the implementation block
@property (assign,nonatomic) int adjustMode;                                         //@synthesize adjustMode=_adjustMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraInsets;                               //@synthesize extraInsets=_extraInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellPadding;                               //@synthesize cellPadding=_cellPadding - In the implementation block
-(int)position;
-(void)setPosition:(int)arg1 ;
-(UIEdgeInsets)cellPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)traitCollection;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)inlineRectIsVertical;
-(CGRect)inlineRect;
-(void)setExtendedStateAdditionalHeight:(double)arg1 ;
-(void)setAdjustMode:(int)arg1 ;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(BOOL)shouldExtendUpwards;
-(void)setInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 layout:(BOOL)arg4 ;
-(void)setInlineText:(NSString *)arg1 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)setInlineRectIsVertical:(BOOL)arg1 ;
-(NSString *)inlineText;
-(CGRect)convertFromInputDelegateRect:(CGRect)arg1 ;
-(UIEdgeInsets)extraInsets;
-(double)extendedStateAdditionalHeight;
-(BOOL)isAcceptableFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(CGRect)arg2 ;
-(int)adjustMode;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textWidth:(double)arg2 ;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textHeight:(double)arg2 ;
-(void)setMaxX:(double)arg1 ;
-(double)maxX;
-(void)adjustFrameForInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 ;
-(BOOL)isReducedWidth;
-(CGRect)previousCollapsedFrame;
-(void)setPreviousCollapsedFrame:(CGRect)arg1 ;
@end

