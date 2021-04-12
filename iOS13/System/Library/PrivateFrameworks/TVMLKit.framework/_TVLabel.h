/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UILabel.h>

@interface _TVLabel : UILabel {

	long long _previousNumberOfLines;
	CGSize _cachedSizeThatFits;
	CGSize _previousTargetSize;
	UIEdgeInsets _padding;
	CGRect _cachedTextRectForBounds;
	CGRect _previousBounds;

}

@property (assign,nonatomic) CGRect cachedTextRectForBounds;               //@synthesize cachedTextRectForBounds=_cachedTextRectForBounds - In the implementation block
@property (assign,nonatomic) CGRect previousBounds;                        //@synthesize previousBounds=_previousBounds - In the implementation block
@property (assign,nonatomic) long long previousNumberOfLines;              //@synthesize previousNumberOfLines=_previousNumberOfLines - In the implementation block
@property (assign,nonatomic) CGSize cachedSizeThatFits;                    //@synthesize cachedSizeThatFits=_cachedSizeThatFits - In the implementation block
@property (assign,nonatomic) CGSize previousTargetSize;                    //@synthesize previousTargetSize=_previousTargetSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                         //@synthesize padding=_padding - In the implementation block
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(UIEdgeInsets)padding;
-(void)drawTextInRect:(CGRect)arg1 ;
-(CGRect)previousBounds;
-(void)setPreviousBounds:(CGRect)arg1 ;
-(void)_clearCachedValues;
-(CGSize)cachedSizeThatFits;
-(CGSize)previousTargetSize;
-(void)setCachedSizeThatFits:(CGSize)arg1 ;
-(void)setPreviousTargetSize:(CGSize)arg1 ;
-(long long)previousNumberOfLines;
-(CGRect)cachedTextRectForBounds;
-(void)setCachedTextRectForBounds:(CGRect)arg1 ;
-(void)setPreviousNumberOfLines:(long long)arg1 ;
@end

