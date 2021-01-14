/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCColor, FCColorGradient;


@protocol FCCardStyleProviding <NSObject,NSCopying>
@property (nonatomic,copy,readonly) FCColor * titleForegroundColor; 
@property (nonatomic,copy,readonly) FCColor * eyebrowForegroundColor; 
@property (nonatomic,copy,readonly) FCColor * cardBackgroundColor; 
@property (nonatomic,copy,readonly) FCColor * cardForegroundColor; 
@property (nonatomic,copy,readonly) FCColorGradient * sauceGradient; 
@property (nonatomic,copy,readonly) FCColor * ctaBackgroundColor; 
@property (nonatomic,copy,readonly) FCColor * ctaForegroundColor; 
@required
-(FCColorGradient *)sauceGradient;
-(FCColor *)titleForegroundColor;
-(FCColor *)cardBackgroundColor;
-(FCColor *)ctaBackgroundColor;
-(FCColor *)ctaForegroundColor;
-(FCColor *)eyebrowForegroundColor;
-(FCColor *)cardForegroundColor;

@end

