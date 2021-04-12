/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class UIColor, IKColor, NSShadow, NSString, UIImageSymbolConfiguration, IKFourTuple;

@interface TVImageLayout : TVViewLayout {

	BOOL _continuousBorder;
	BOOL _allowsNonOpaqueShadows;
	BOOL _useInSearchPartial;
	double _upscaleFactor;
	double _aspectRatio;
	long long _scaleMode;
	UIColor* _borderColor;
	IKColor* _ikTintColor;
	IKColor* _ikDarkTintColor;
	NSShadow* _shadow;
	NSString* _placeholderArtworkName;
	NSString* _cropCode;
	UIImageSymbolConfiguration* _imageSymbolConfiguration;
	NSString* _imageTreatment;
	IKFourTuple* _ikBorderRadius;
	NSString* _inlineTitle;
	CGSize _imageSize;
	TVCornerRadii _borderRadii;
	UIEdgeInsets _borderWidth;

}

@property (nonatomic,copy) NSString * imageTreatment;                                            //@synthesize imageTreatment=_imageTreatment - In the implementation block
@property (nonatomic,retain) IKFourTuple * ikBorderRadius;                                       //@synthesize ikBorderRadius=_ikBorderRadius - In the implementation block
@property (nonatomic,copy) NSString * inlineTitle;                                               //@synthesize inlineTitle=_inlineTitle - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadows;                                        //@synthesize allowsNonOpaqueShadows=_allowsNonOpaqueShadows - In the implementation block
@property (assign,nonatomic) BOOL useInSearchPartial;                                            //@synthesize useInSearchPartial=_useInSearchPartial - In the implementation block
@property (nonatomic,readonly) CGSize decoratorSize; 
@property (assign,nonatomic) CGSize imageSize;                                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double upscaleFactor;                                               //@synthesize upscaleFactor=_upscaleFactor - In the implementation block
@property (assign,nonatomic) double aspectRatio;                                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                                //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                                          //@synthesize borderRadii=_borderRadii - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidth;                                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL continuousBorder;                                              //@synthesize continuousBorder=_continuousBorder - In the implementation block
@property (nonatomic,retain) IKColor * ikTintColor;                                              //@synthesize ikTintColor=_ikTintColor - In the implementation block
@property (nonatomic,retain) IKColor * ikDarkTintColor;                                          //@synthesize ikDarkTintColor=_ikDarkTintColor - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                                  //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy) NSString * placeholderArtworkName;                                    //@synthesize placeholderArtworkName=_placeholderArtworkName - In the implementation block
@property (nonatomic,copy) NSString * cropCode;                                                  //@synthesize cropCode=_cropCode - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * imageSymbolConfiguration;              //@synthesize imageSymbolConfiguration=_imageSymbolConfiguration - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(NSShadow *)shadow;
-(CGSize)imageSize;
-(id)init;
-(void)setInlineTitle:(NSString *)arg1 ;
-(UIColor *)borderColor;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(NSString *)inlineTitle;
-(double)aspectRatio;
-(long long)scaleMode;
-(UIEdgeInsets)borderWidth;
-(TVCornerRadii)borderRadii;
-(void)setAspectRatio:(double)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setScaleMode:(long long)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cropCode;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(UIEdgeInsets)arg1 ;
-(void)setCropCode:(NSString *)arg1 ;
-(CGSize)decoratorSize;
-(void)setPlaceholderArtworkName:(NSString *)arg1 ;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(void)setUpscaleFactor:(double)arg1 ;
-(void)setImageSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(void)setContinuousBorder:(BOOL)arg1 ;
-(NSString *)imageTreatment;
-(void)setImageTreatment:(NSString *)arg1 ;
-(IKFourTuple *)ikBorderRadius;
-(NSString *)placeholderArtworkName;
-(double)defaultFocusSizeIncrease;
-(void)setIkTintColor:(IKColor *)arg1 ;
-(void)setIkDarkTintColor:(IKColor *)arg1 ;
-(void)setIkBorderRadius:(IKFourTuple *)arg1 ;
-(void)setAllowsNonOpaqueShadows:(BOOL)arg1 ;
-(void)setUseInSearchPartial:(BOOL)arg1 ;
-(CGSize)_aspectFitToSize:(CGSize)arg1 scaleToSize:(CGSize)arg2 aspectRatio:(double)arg3 ;
-(double)upscaleFactor;
-(BOOL)continuousBorder;
-(IKColor *)ikTintColor;
-(IKColor *)ikDarkTintColor;
-(BOOL)allowsNonOpaqueShadows;
-(BOOL)useInSearchPartial;
@end

