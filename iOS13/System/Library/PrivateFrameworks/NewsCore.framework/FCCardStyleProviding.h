/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(FCColor *)titleForegroundColor;
-(FCColor *)eyebrowForegroundColor;
-(FCColor *)cardBackgroundColor;
-(FCColor *)cardForegroundColor;
-(FCColorGradient *)sauceGradient;
-(FCColor *)ctaBackgroundColor;
-(FCColor *)ctaForegroundColor;

@end

