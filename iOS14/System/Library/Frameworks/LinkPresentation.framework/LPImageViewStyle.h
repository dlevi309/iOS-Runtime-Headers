/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPEmailCompatibleCaptionBarItemChild.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPSize, LPPointUnit, LPPadding, LPShadowStyle, UIColor;

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying> {

	BOOL _requireFixedSize;
	BOOL _allowsPlatterPresentation;
	LPSize* _fixedSize;
	LPSize* _minimumSize;
	LPPointUnit* _fixedFallbackImageSize;
	LPPadding* _margin;
	LPPadding* _padding;
	long long _scalingMode;
	long long _filter;
	long long _verticalAlignment;
	LPShadowStyle* _shadow;
	UIColor* _maskColor;
	double _opacity;
	UIColor* _backgroundColor;
	LPPointUnit* _backgroundInset;
	LPPointUnit* _cornerRadius;
	double _darkeningAmount;

}

@property (nonatomic,retain) LPSize * fixedSize;                                //@synthesize fixedSize=_fixedSize - In the implementation block
@property (assign,nonatomic) BOOL requireFixedSize;                             //@synthesize requireFixedSize=_requireFixedSize - In the implementation block
@property (nonatomic,retain) LPSize * minimumSize;                              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (nonatomic,retain) LPPointUnit * fixedFallbackImageSize;              //@synthesize fixedFallbackImageSize=_fixedFallbackImageSize - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * margin;                       //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                      //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long scalingMode;                             //@synthesize scalingMode=_scalingMode - In the implementation block
@property (assign,nonatomic) long long filter;                                  //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                       //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) LPShadowStyle * shadow;                            //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) UIColor * maskColor;                               //@synthesize maskColor=_maskColor - In the implementation block
@property (assign,nonatomic) double opacity;                                    //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) BOOL allowsPlatterPresentation;                    //@synthesize allowsPlatterPresentation=_allowsPlatterPresentation - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) LPPointUnit * backgroundInset;                     //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (nonatomic,retain) LPPointUnit * cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double darkeningAmount;                            //@synthesize darkeningAmount=_darkeningAmount - In the implementation block
-(LPShadowStyle *)shadow;
-(LPPadding *)margin;
-(void)setFilter:(long long)arg1 ;
-(long long)filter;
-(id)init;
-(UIColor *)maskColor;
-(double)darkeningAmount;
-(double)opacity;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(BOOL)requireFixedSize;
-(void)setRequireFixedSize:(BOOL)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(UIColor *)backgroundColor;
-(LPPointUnit *)cornerRadius;
-(void)setDarkeningAmount:(double)arg1 ;
-(LPPointUnit *)fixedFallbackImageSize;
-(void)setFixedFallbackImageSize:(LPPointUnit *)arg1 ;
-(void)setScalingMode:(long long)arg1 ;
-(long long)scalingMode;
-(void)setMinimumSize:(LPSize *)arg1 ;
-(BOOL)allowsPlatterPresentation;
-(LPPointUnit *)backgroundInset;
-(id)emailCompatibleMargin;
-(void)setAllowsPlatterPresentation:(BOOL)arg1 ;
-(LPSize *)minimumSize;
-(void)setFixedSize:(LPSize *)arg1 ;
-(long long)verticalAlignment;
-(LPPadding *)padding;
-(void)setShadow:(LPShadowStyle *)arg1 ;
-(void)setBackgroundInset:(LPPointUnit *)arg1 ;
-(void)setCornerRadius:(LPPointUnit *)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPSize *)fixedSize;
@end

