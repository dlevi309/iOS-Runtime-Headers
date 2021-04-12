/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIImage.h>

@class SBIconLabelImageParameters, UIImage;

@interface SBIconLabelImage : UIImage {

	SBIconLabelImageParameters* _parameters;
	UIEdgeInsets _alignmentRectInsets;
	double _baselineOffsetFromBottom;
	UIImage* _legibilityImage;

}

@property (nonatomic,retain) UIImage * legibilityImage;                                   //@synthesize legibilityImage=_legibilityImage - In the implementation block
@property (nonatomic,copy,readonly) SBIconLabelImageParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3 ;
+(BOOL)attributedText:(id)arg1 fitsInRect:(CGRect)arg2 textRect:(out CGRect*)arg3 ;
+(id)legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2 pool:(id)arg3 ;
+(id)imageWithParameters:(id)arg1 pool:(id)arg2 legibilityPool:(id)arg3 ;
+(double)legibilityStrengthForLegibilityStyle:(long long)arg1 ;
+(id)imageWithParameters:(id)arg1 ;
+(CGSize)_maxLegibilityImageSizeForLabelSize:(CGSize)arg1 ;
+(BOOL)needsLegibilityImageForParameters:(id)arg1 ;
-(id)description;
-(SBIconLabelImageParameters *)parameters;
-(BOOL)hasBaseline;
-(double)baselineOffsetFromBottom;
-(UIEdgeInsets)alignmentRectInsets;
-(id)_initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 alignmentRectInsets:(UIEdgeInsets)arg5 baselineOffsetFromBottom:(double)arg6 ;
-(void)setLegibilityImage:(UIImage *)arg1 ;
-(UIImage *)legibilityImage;
@end

