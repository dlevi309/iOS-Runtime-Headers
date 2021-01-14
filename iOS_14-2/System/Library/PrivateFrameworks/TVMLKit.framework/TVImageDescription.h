/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVViewDescription.h>

@class UIImage, NSString;

@interface TVImageDescription : TVViewDescription {

	BOOL _configureForMetrics;
	BOOL _needsRoomBannerImageDecorator;
	BOOL _isInBackgroundOrBanner;
	BOOL _hasGradient;
	id _imageProxy;
	UIImage* _placeholderImage;
	long long _semanticContentAttribute;
	NSString* _accessibilityText;
	NSString* _siriData;

}

@property (assign,nonatomic) BOOL needsRoomBannerImageDecorator;              //@synthesize needsRoomBannerImageDecorator=_needsRoomBannerImageDecorator - In the implementation block
@property (assign,nonatomic) BOOL isInBackgroundOrBanner;                     //@synthesize isInBackgroundOrBanner=_isInBackgroundOrBanner - In the implementation block
@property (assign,nonatomic) BOOL hasGradient;                                //@synthesize hasGradient=_hasGradient - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                      //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (nonatomic,copy) NSString * siriData;                               //@synthesize siriData=_siriData - In the implementation block
@property (nonatomic,retain) id imageProxy;                                   //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL configureForMetrics;                        //@synthesize configureForMetrics=_configureForMetrics - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) long long semanticContentAttribute;              //@synthesize semanticContentAttribute=_semanticContentAttribute - In the implementation block
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(long long)semanticContentAttribute;
-(id)initWithProxy:(id)arg1 andPlaceHolderImage:(id)arg2 ;
-(id)imageProxy;
-(void)setImageProxy:(id)arg1 ;
-(BOOL)hasGradient;
-(void)setHasGradient:(BOOL)arg1 ;
-(BOOL)configureForMetrics;
-(void)setConfigureForMetrics:(BOOL)arg1 ;
-(BOOL)needsRoomBannerImageDecorator;
-(void)setNeedsRoomBannerImageDecorator:(BOOL)arg1 ;
-(BOOL)isInBackgroundOrBanner;
-(void)setIsInBackgroundOrBanner:(BOOL)arg1 ;
-(NSString *)siriData;
-(void)setSiriData:(NSString *)arg1 ;
@end

