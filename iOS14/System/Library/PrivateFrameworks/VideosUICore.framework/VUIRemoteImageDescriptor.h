/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


#import <VideosUICore/VideosUICore-Structs.h>
@class NSString, UIColor, NSShadow;

@interface VUIRemoteImageDescriptor : NSObject {

	BOOL _loadsImmediately;
	BOOL _templated;
	BOOL _continuousBorder;
	NSString* _src;
	double _aspectRatio;
	NSString* _extension;
	NSString* _cropCode;
	UIColor* _backgroundColor;
	UIColor* _tintColor;
	UIColor* _highlightColor;
	UIColor* _placeholderColor;
	NSString* _placeholderSrc;
	unsigned long long _decoratorType;
	double _cornerRadius;
	long long _scaleMode;
	UIColor* _borderColor;
	NSShadow* _shadow;
	NSString* _accessibilityText;
	CGSize _imageSize;
	VUICornerRadii _borderRadii;
	UIEdgeInsets _borderWidth;

}

@property (nonatomic,readonly) NSString * src;                               //@synthesize src=_src - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                           //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL loadsImmediately;                          //@synthesize loadsImmediately=_loadsImmediately - In the implementation block
@property (assign,getter=isTemplated,nonatomic) BOOL templated;              //@synthesize templated=_templated - In the implementation block
@property (nonatomic,copy) NSString * extension;                             //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) NSString * cropCode;                              //@synthesize cropCode=_cropCode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                            //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                     //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,copy) NSString * placeholderSrc;                        //@synthesize placeholderSrc=_placeholderSrc - In the implementation block
@property (assign,nonatomic) unsigned long long decoratorType;               //@synthesize decoratorType=_decoratorType - In the implementation block
@property (assign,nonatomic) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long scaleMode;                            //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) BOOL continuousBorder;                          //@synthesize continuousBorder=_continuousBorder - In the implementation block
@property (assign,nonatomic) VUICornerRadii borderRadii;                     //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidth;                       //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                              //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                     //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(NSShadow *)shadow;
-(NSString *)src;
-(CGSize)imageSize;
-(UIColor *)placeholderColor;
-(NSString *)accessibilityText;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)borderColor;
-(void)setExtension:(NSString *)arg1 ;
-(double)aspectRatio;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(long long)scaleMode;
-(NSString *)extension;
-(UIEdgeInsets)borderWidth;
-(VUICornerRadii)borderRadii;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setScaleMode:(long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(NSString *)cropCode;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(UIColor *)highlightColor;
-(void)setBorderWidth:(UIEdgeInsets)arg1 ;
-(void)setCropCode:(NSString *)arg1 ;
-(void)setBorderRadii:(VUICornerRadii)arg1 ;
-(BOOL)isTemplated;
-(void)setTemplated:(BOOL)arg1 ;
-(void)setContinuousBorder:(BOOL)arg1 ;
-(BOOL)continuousBorder;
-(void)setAspectRatio:(double)arg1 width:(double)arg2 ;
-(id)initWithSrc:(id)arg1 ;
-(BOOL)loadsImmediately;
-(void)setLoadsImmediately:(BOOL)arg1 ;
-(NSString *)placeholderSrc;
-(void)setPlaceholderSrc:(NSString *)arg1 ;
-(unsigned long long)decoratorType;
-(void)setDecoratorType:(unsigned long long)arg1 ;
@end

