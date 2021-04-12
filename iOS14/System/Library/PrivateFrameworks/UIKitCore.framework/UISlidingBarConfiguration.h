/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {

	SCD_Union_UI59 _configurationFlags;
	long long _supplementaryEdge;
	double _minimumMainWidthFraction;
	double _minimumMainWidthFractionForSecondColumn;
	double _maximumMainWidth;
	double _rubberBandExtension;
	NSArray* _leadingWidths;
	NSArray* _trailingWidths;
	NSArray* _supplementaryWidths;
	UIColor* _borderColor;
	double __rawLeadingBorderWidth;
	double __rawTrailingBorderWidth;
	long long __leadingBackgroundStyle;
	long long __trailingBackgroundStyle;

}

@property (assign,setter=_setRawLeadingBorderWidth:,nonatomic) double _rawLeadingBorderWidth;                            //@synthesize _rawLeadingBorderWidth=__rawLeadingBorderWidth - In the implementation block
@property (assign,setter=_setLeadingBorderWidthIsInPixels:,nonatomic) BOOL _leadingBorderWidthIsInPixels; 
@property (assign,setter=_setRawTrailingBorderWidth:,nonatomic) double _rawTrailingBorderWidth;                          //@synthesize _rawTrailingBorderWidth=__rawTrailingBorderWidth - In the implementation block
@property (assign,setter=_setTrailingBorderWidthIsInPixels:,nonatomic) BOOL _trailingBorderWidthIsInPixels; 
@property (assign,setter=_setLeadingBackgroundStyle:,nonatomic) long long _leadingBackgroundStyle;                       //@synthesize _leadingBackgroundStyle=__leadingBackgroundStyle - In the implementation block
@property (assign,setter=_setTrailingBackgroundStyle:,nonatomic) long long _trailingBackgroundStyle;                     //@synthesize _trailingBackgroundStyle=__trailingBackgroundStyle - In the implementation block
@property (assign,nonatomic) double minimumMainWidthFraction;                                                            //@synthesize minimumMainWidthFraction=_minimumMainWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumMainWidthFractionForSecondColumn;                                             //@synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn - In the implementation block
@property (assign,nonatomic) double maximumMainWidth;                                                                    //@synthesize maximumMainWidth=_maximumMainWidth - In the implementation block
@property (assign,nonatomic) long long supplementaryEdge;                                                                //@synthesize supplementaryEdge=_supplementaryEdge - In the implementation block
@property (assign,nonatomic) BOOL leadingMayBeHidden; 
@property (assign,nonatomic) BOOL trailingMayBeHidden; 
@property (assign,nonatomic) BOOL supplementaryMayBeHidden; 
@property (assign,nonatomic) double rubberBandExtension;                                                                 //@synthesize rubberBandExtension=_rubberBandExtension - In the implementation block
@property (nonatomic,copy) NSArray * leadingWidths;                                                                      //@synthesize leadingWidths=_leadingWidths - In the implementation block
@property (nonatomic,copy) NSArray * trailingWidths;                                                                     //@synthesize trailingWidths=_trailingWidths - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryWidths;                                                                //@synthesize supplementaryWidths=_supplementaryWidths - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                                                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL allowMixedSideBySideAndOverlay; 
@property (assign,nonatomic) BOOL allowTotalWidthGreaterThanParent; 
@property (assign,nonatomic) BOOL forceOverlay; 
@property (assign,nonatomic) BOOL supplementaryComplementsLeadingTrailing; 
@property (assign,nonatomic) BOOL detachedMain; 
@property (assign,nonatomic) BOOL shouldFadeStaticNavBarButton; 
-(void)setAllowTotalWidthGreaterThanParent:(BOOL)arg1 ;
-(void)setAllowMixedSideBySideAndOverlay:(BOOL)arg1 ;
-(double)trailingBorderWidthForScale:(double)arg1 ;
-(void)setMinimumMainWidthFractionForSecondColumn:(double)arg1 ;
-(BOOL)shouldFadeStaticNavBarButton;
-(void)_setTrailingBorderWidthIsInPixels:(BOOL)arg1 ;
-(NSArray *)leadingWidths;
-(void)setTrailingMayBeHidden:(BOOL)arg1 ;
-(id)init;
-(void)setDetachedMain:(BOOL)arg1 ;
-(void)setLeadingBorderWidthInPixels:(double)arg1 ;
-(double)maximumMainWidth;
-(void)setMinimumMainWidthFraction:(double)arg1 ;
-(void)setMaximumMainWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(BOOL)detachedMain;
-(long long)supplementaryEdge;
-(void)setTrailingBorderWidthInPixels:(double)arg1 ;
-(BOOL)supplementaryComplementsLeadingTrailing;
-(BOOL)leadingMayBeHidden;
-(BOOL)forceOverlay;
-(BOOL)supplementaryMayBeHidden;
-(double)minimumMainWidthFraction;
-(void)_setTrailingBackgroundStyle:(long long)arg1 ;
-(double)rubberBandExtension;
-(double)leadingBorderWidthForScale:(double)arg1 ;
-(id)description;
-(void)_setLeadingBorderWidthIsInPixels:(BOOL)arg1 ;
-(void)setLeadingWidths:(NSArray *)arg1 ;
-(long long)_trailingBackgroundStyle;
-(void)setForceOverlay:(BOOL)arg1 ;
-(BOOL)allowTotalWidthGreaterThanParent;
-(void)_setRawTrailingBorderWidth:(double)arg1 ;
-(void)setSupplementaryEdge:(long long)arg1 ;
-(BOOL)_leadingBorderWidthIsInPixels;
-(BOOL)trailingMayBeHidden;
-(NSArray *)trailingWidths;
-(BOOL)allowMixedSideBySideAndOverlay;
-(double)minimumMainWidthFractionForSecondColumn;
-(unsigned long long)hash;
-(double)_rawLeadingBorderWidth;
-(double)_rawTrailingBorderWidth;
-(void)setSupplementaryWidths:(NSArray *)arg1 ;
-(NSArray *)supplementaryWidths;
-(long long)_leadingBackgroundStyle;
-(void)_setRawLeadingBorderWidth:(double)arg1 ;
-(void)setLeadingBorderWidthInPoints:(double)arg1 ;
-(void)setSupplementaryComplementsLeadingTrailing:(BOOL)arg1 ;
-(void)setSupplementaryMayBeHidden:(BOOL)arg1 ;
-(void)setRubberBandExtension:(double)arg1 ;
-(void)_setLeadingBackgroundStyle:(long long)arg1 ;
-(void)setShouldFadeStaticNavBarButton:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrailingWidths:(NSArray *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setLeadingMayBeHidden:(BOOL)arg1 ;
-(BOOL)_trailingBorderWidthIsInPixels;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTrailingBorderWidthInPoints:(double)arg1 ;
@end

