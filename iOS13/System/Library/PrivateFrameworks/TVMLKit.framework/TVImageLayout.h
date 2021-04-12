/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSShadow *)shadow;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIEdgeInsets)borderWidth;
-(void)setBorderWidth:(UIEdgeInsets)arg1 ;
-(CGSize)imageSize;
-(UIColor *)borderColor;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(TVCornerRadii)borderRadii;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(NSString *)imageTreatment;
-(void)setImageTreatment:(NSString *)arg1 ;
-(IKFourTuple *)ikBorderRadius;
-(CGSize)decoratorSize;
-(NSString *)placeholderArtworkName;
-(double)focusSizeIncrease;
-(NSString *)inlineTitle;
-(void)setInlineTitle:(NSString *)arg1 ;
-(void)setUpscaleFactor:(double)arg1 ;
-(void)setIkTintColor:(IKColor *)arg1 ;
-(void)setIkDarkTintColor:(IKColor *)arg1 ;
-(void)setPlaceholderArtworkName:(NSString *)arg1 ;
-(void)setIkBorderRadius:(IKFourTuple *)arg1 ;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(void)setContinuousBorder:(BOOL)arg1 ;
-(void)setAllowsNonOpaqueShadows:(BOOL)arg1 ;
-(void)setUseInSearchPartial:(BOOL)arg1 ;
-(void)setCropCode:(NSString *)arg1 ;
-(void)setImageSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(CGSize)_aspectFitToSize:(CGSize)arg1 scaleToSize:(CGSize)arg2 aspectRatio:(double)arg3 ;
-(double)upscaleFactor;
-(BOOL)continuousBorder;
-(IKColor *)ikTintColor;
-(IKColor *)ikDarkTintColor;
-(NSString *)cropCode;
-(BOOL)allowsNonOpaqueShadows;
-(BOOL)useInSearchPartial;
@end

