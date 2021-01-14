/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
*/


#import <TipsUI/TipsUI-Structs.h>
@class UITraitCollection;

@interface TPSAppearance : NSObject {

	unsigned long long _mediaSizeType;
	UITraitCollection* _traitCollection;
	double _sizeToScreenRatio;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double sizeToScreenRatio;                         //@synthesize sizeToScreenRatio=_sizeToScreenRatio - In the implementation block
@property (assign,nonatomic) unsigned long long mediaSizeType;                 //@synthesize mediaSizeType=_mediaSizeType - In the implementation block
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
+(id)secondaryBackgroundColor;
+(BOOL)isPhoneUI;
+(id)boldBodyFont;
+(id)footnoteFont;
+(id)bodyFont;
+(id)defaultBackgroundColor;
+(double)buttonHeight;
+(id)preferredFontForTextStyle:(id)arg1 ;
+(id)secondaryLabelColor;
+(id)titleLabelFont;
+(id)language;
+(id)systemFontOfSize:(double)arg1 weight:(double)arg2 ;
+(id)headlineFont;
+(id)preferredFontForTextStyle:(id)arg1 symoblicTraits:(unsigned)arg2 languageCode:(id)arg3 ;
+(id)preferredFontForTextStyle:(id)arg1 languageCode:(id)arg2 ;
+(double)displayMultiplier;
+(double)introOutroTitleTopPadding;
+(id)defaultLabelColor;
+(id)defaultTextLabelFont;
+(id)italicBodyFont;
+(id)subheadlineFont;
-(UITraitCollection *)traitCollection;
-(double)displayScale;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)updateAppearanceWithSize:(CGSize)arg1 ;
-(unsigned long long)mediaSizeType;
-(void)updateMediaSizeType;
-(void)setMediaSizeType:(unsigned long long)arg1 ;
-(double)sizeToScreenRatio;
-(id)initAppearanceWithTraits:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)isCompactLayout;
-(BOOL)sideAppMode;
-(double)displayMultiplierWithValue:(double)arg1 ;
-(double)nativeSizeForValue:(double)arg1 ;
-(double)heightToWidthRatioFromSizes:(id)arg1 mediaSizeType:(unsigned long long)arg2 defaultValue:(double)arg3 ;
-(void)setSizeToScreenRatio:(double)arg1 ;
@end

