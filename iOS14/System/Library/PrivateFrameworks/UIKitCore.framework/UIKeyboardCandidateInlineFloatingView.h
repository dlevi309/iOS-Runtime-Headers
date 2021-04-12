/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)maxX;
-(int)position;
-(id)traitCollection;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)setMaxX:(double)arg1 ;
-(void)setInlineText:(NSString *)arg1 ;
-(int)adjustMode;
-(CGRect)convertFromInputDelegateRect:(CGRect)arg1 ;
-(double)extendedStateAdditionalHeight;
-(BOOL)isAcceptableFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(CGRect)previousCollapsedFrame;
-(CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(CGRect)arg2 ;
-(BOOL)isReducedWidth;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textWidth:(double)arg2 ;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textHeight:(double)arg2 ;
-(void)adjustFrameForInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 ;
-(void)setPreviousCollapsedFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)inlineRectIsVertical;
-(NSString *)inlineText;
-(void)setInlineRectIsVertical:(BOOL)arg1 ;
-(void)setPosition:(int)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(UIEdgeInsets)extraInsets;
-(UIEdgeInsets)cellPadding;
-(void)setAdjustMode:(int)arg1 ;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(void)setExtendedStateAdditionalHeight:(double)arg1 ;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(BOOL)shouldExtendUpwards;
-(void)setInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 layout:(BOOL)arg4 ;
-(CGRect)inlineRect;
@end

