/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKOverlayConfiguration.h>

@class ASOOverlayAppClipConfiguration, NSString;

@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration

@property (nonatomic,retain,readonly) ASOOverlayAppClipConfiguration * _backing; 
@property (nonatomic,retain) NSString * campaignToken; 
@property (nonatomic,retain) NSString * providerToken; 
@property (assign,nonatomic) long long position; 
-(long long)position;
-(id)initWithPosition:(long long)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(id)_init;
-(id)initWithBacking:(id)arg1 ;
-(void)setCampaignToken:(NSString *)arg1 ;
-(NSString *)campaignToken;
-(void)setProviderToken:(NSString *)arg1 ;
-(NSString *)providerToken;
-(void)setAdditionalValue:(id)arg1 forKey:(id)arg2 ;
-(id)additionalValueForKey:(id)arg1 ;
@end

