/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


#import <VideosUICore/VideosUICore-Structs.h>
@class NSString, UIImageSymbolConfiguration, UIColor;

@interface VUIResourceImageDescriptor : NSObject {

	BOOL _scaleToSize;
	NSString* _resourceName;
	unsigned long long _imageType;
	UIImageSymbolConfiguration* _imageSymbolConfiguration;
	double _aspectRatio;
	UIColor* _borderColor;
	UIColor* _tintColor;
	UIColor* _highlightColor;
	NSString* _accessibilityText;
	CGSize _imageSize;
	VUICornerRadii _borderRadii;
	UIEdgeInsets _borderWidth;

}

@property (nonatomic,copy) NSString * resourceName;                                                //@synthesize resourceName=_resourceName - In the implementation block
@property (assign,nonatomic) BOOL scaleToSize;                                                     //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (nonatomic,readonly) unsigned long long imageType;                                       //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) UIImageSymbolConfiguration * imageSymbolConfiguration;              //@synthesize imageSymbolConfiguration=_imageSymbolConfiguration - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) VUICornerRadii borderRadii;                                           //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                                //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidth;                                             //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                             //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                                           //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(CGSize)imageSize;
-(NSString *)accessibilityText;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(NSString *)resourceName;
-(UIColor *)borderColor;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(double)aspectRatio;
-(UIEdgeInsets)borderWidth;
-(VUICornerRadii)borderRadii;
-(unsigned long long)imageType;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)setResourceName:(NSString *)arg1 ;
-(UIColor *)highlightColor;
-(void)setBorderWidth:(UIEdgeInsets)arg1 ;
-(void)setBorderRadii:(VUICornerRadii)arg1 ;
-(void)setScaleToSize:(BOOL)arg1 ;
-(BOOL)scaleToSize;
-(id)initWithSymbol:(id)arg1 symbolConfiguration:(id)arg2 scaleToSize:(BOOL)arg3 ;
-(id)initWithResource:(id)arg1 scaleToSize:(BOOL)arg2 ;
-(void)setAspectRatio:(double)arg1 width:(double)arg2 ;
@end

