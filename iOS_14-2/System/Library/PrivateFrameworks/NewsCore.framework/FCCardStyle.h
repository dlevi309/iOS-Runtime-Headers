/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCCardStyleProviding.h>

@class FCColor, FCColorGradient, NSString;

@interface FCCardStyle : NSObject <FCCardStyleProviding> {

	FCColor* _titleForegroundColor;
	FCColor* _eyebrowForegroundColor;
	FCColor* _cardBackgroundColor;
	FCColor* _cardForegroundColor;
	FCColorGradient* _sauceGradient;
	FCColor* _ctaBackgroundColor;
	FCColor* _ctaForegroundColor;

}

@property (nonatomic,copy) FCColor * titleForegroundColor;                //@synthesize titleForegroundColor=_titleForegroundColor - In the implementation block
@property (nonatomic,copy) FCColor * eyebrowForegroundColor;              //@synthesize eyebrowForegroundColor=_eyebrowForegroundColor - In the implementation block
@property (nonatomic,copy) FCColor * cardBackgroundColor;                 //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
@property (nonatomic,copy) FCColor * cardForegroundColor;                 //@synthesize cardForegroundColor=_cardForegroundColor - In the implementation block
@property (nonatomic,copy) FCColorGradient * sauceGradient;               //@synthesize sauceGradient=_sauceGradient - In the implementation block
@property (nonatomic,copy) FCColor * ctaBackgroundColor;                  //@synthesize ctaBackgroundColor=_ctaBackgroundColor - In the implementation block
@property (nonatomic,copy) FCColor * ctaForegroundColor;                  //@synthesize ctaForegroundColor=_ctaForegroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleWithConfigDict:(id)arg1 ;
+(id)styleWithPBCardStyle:(id)arg1 ;
-(id)initWithTitleForegroundColor:(id)arg1 eyebrowForegroundColor:(id)arg2 cardBackgroundColor:(id)arg3 cardForegroundColor:(id)arg4 sauceGradient:(id)arg5 ctaBackgroundColor:(id)arg6 ctaForegroundColor:(id)arg7 ;
-(FCColorGradient *)sauceGradient;
-(void)setCardForegroundColor:(FCColor *)arg1 ;
-(void)setCtaForegroundColor:(FCColor *)arg1 ;
-(FCColor *)titleForegroundColor;
-(FCColor *)cardBackgroundColor;
-(void)setCardBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)ctaBackgroundColor;
-(void)setCtaBackgroundColor:(FCColor *)arg1 ;
-(void)setTitleForegroundColor:(FCColor *)arg1 ;
-(unsigned long long)hash;
-(FCColor *)ctaForegroundColor;
-(FCColor *)eyebrowForegroundColor;
-(void)setSauceGradient:(FCColorGradient *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pbCardStyle;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEyebrowForegroundColor:(FCColor *)arg1 ;
-(FCColor *)cardForegroundColor;
@end

