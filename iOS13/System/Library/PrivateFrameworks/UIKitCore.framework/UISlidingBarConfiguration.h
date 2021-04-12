/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {

	BOOL _leadingMayBeHidden;
	BOOL _trailingMayBeHidden;
	BOOL _allowMixedSideBySideAndOverlay;
	BOOL __leadingBorderWidthIsInPixels;
	BOOL __trailingBorderWidthIsInPixels;
	double _minimumMainWidthFraction;
	double _minimumMainWidthFractionForSecondColumn;
	double _maximumMainWidth;
	NSArray* _leadingWidths;
	NSArray* _trailingWidths;
	UIColor* _borderColor;
	double __rawLeadingBorderWidth;
	double __rawTrailingBorderWidth;
	long long __leadingBackgroundStyle;
	long long __trailingBackgroundStyle;

}

@property (assign,setter=_setRawLeadingBorderWidth:,nonatomic) double _rawLeadingBorderWidth;                            //@synthesize _rawLeadingBorderWidth=__rawLeadingBorderWidth - In the implementation block
@property (assign,setter=_setLeadingBorderWidthIsInPixels:,nonatomic) BOOL _leadingBorderWidthIsInPixels;                //@synthesize _leadingBorderWidthIsInPixels=__leadingBorderWidthIsInPixels - In the implementation block
@property (assign,setter=_setRawTrailingBorderWidth:,nonatomic) double _rawTrailingBorderWidth;                          //@synthesize _rawTrailingBorderWidth=__rawTrailingBorderWidth - In the implementation block
@property (assign,setter=_setTrailingBorderWidthIsInPixels:,nonatomic) BOOL _trailingBorderWidthIsInPixels;              //@synthesize _trailingBorderWidthIsInPixels=__trailingBorderWidthIsInPixels - In the implementation block
@property (assign,setter=_setLeadingBackgroundStyle:,nonatomic) long long _leadingBackgroundStyle;                       //@synthesize _leadingBackgroundStyle=__leadingBackgroundStyle - In the implementation block
@property (assign,setter=_setTrailingBackgroundStyle:,nonatomic) long long _trailingBackgroundStyle;                     //@synthesize _trailingBackgroundStyle=__trailingBackgroundStyle - In the implementation block
@property (assign,nonatomic) double minimumMainWidthFraction;                                                            //@synthesize minimumMainWidthFraction=_minimumMainWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumMainWidthFractionForSecondColumn;                                             //@synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn - In the implementation block
@property (assign,nonatomic) double maximumMainWidth;                                                                    //@synthesize maximumMainWidth=_maximumMainWidth - In the implementation block
@property (assign,nonatomic) BOOL leadingMayBeHidden;                                                                    //@synthesize leadingMayBeHidden=_leadingMayBeHidden - In the implementation block
@property (assign,nonatomic) BOOL trailingMayBeHidden;                                                                   //@synthesize trailingMayBeHidden=_trailingMayBeHidden - In the implementation block
@property (nonatomic,copy) NSArray * leadingWidths;                                                                      //@synthesize leadingWidths=_leadingWidths - In the implementation block
@property (nonatomic,copy) NSArray * trailingWidths;                                                                     //@synthesize trailingWidths=_trailingWidths - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                                                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL allowMixedSideBySideAndOverlay;                                                        //@synthesize allowMixedSideBySideAndOverlay=_allowMixedSideBySideAndOverlay - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(NSArray *)leadingWidths;
-(NSArray *)trailingWidths;
-(double)leadingBorderWidthForScale:(double)arg1 ;
-(double)trailingBorderWidthForScale:(double)arg1 ;
-(BOOL)leadingMayBeHidden;
-(BOOL)trailingMayBeHidden;
-(double)minimumMainWidthFraction;
-(double)minimumMainWidthFractionForSecondColumn;
-(double)maximumMainWidth;
-(BOOL)allowMixedSideBySideAndOverlay;
-(void)setMinimumMainWidthFraction:(double)arg1 ;
-(void)setMinimumMainWidthFractionForSecondColumn:(double)arg1 ;
-(void)setMaximumMainWidth:(double)arg1 ;
-(void)setLeadingMayBeHidden:(BOOL)arg1 ;
-(void)setTrailingMayBeHidden:(BOOL)arg1 ;
-(void)setLeadingWidths:(NSArray *)arg1 ;
-(void)setTrailingWidths:(NSArray *)arg1 ;
-(void)setLeadingBorderWidthInPixels:(double)arg1 ;
-(void)setTrailingBorderWidthInPixels:(double)arg1 ;
-(void)setAllowMixedSideBySideAndOverlay:(BOOL)arg1 ;
-(void)_setLeadingBackgroundStyle:(long long)arg1 ;
-(void)_setTrailingBackgroundStyle:(long long)arg1 ;
-(double)_rawLeadingBorderWidth;
-(void)_setRawLeadingBorderWidth:(double)arg1 ;
-(BOOL)_leadingBorderWidthIsInPixels;
-(void)_setLeadingBorderWidthIsInPixels:(BOOL)arg1 ;
-(double)_rawTrailingBorderWidth;
-(void)_setRawTrailingBorderWidth:(double)arg1 ;
-(BOOL)_trailingBorderWidthIsInPixels;
-(void)_setTrailingBorderWidthIsInPixels:(BOOL)arg1 ;
-(long long)_leadingBackgroundStyle;
-(long long)_trailingBackgroundStyle;
-(void)setLeadingBorderWidthInPoints:(double)arg1 ;
-(void)setTrailingBorderWidthInPoints:(double)arg1 ;
@end

