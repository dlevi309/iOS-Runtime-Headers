/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKOverlayConfiguration.h>

@class ASOOverlayAppConfiguration, NSString;

@interface SKOverlayAppConfiguration : SKOverlayConfiguration

@property (nonatomic,retain,readonly) ASOOverlayAppConfiguration * _backing; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,retain) NSString * campaignToken; 
@property (nonatomic,retain) NSString * providerToken; 
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL userDismissible; 
-(void)setAppIdentifier:(NSString *)arg1 ;
-(long long)position;
-(NSString *)appIdentifier;
-(void)setPosition:(long long)arg1 ;
-(id)_init;
-(id)initWithBacking:(id)arg1 ;
-(id)initWithAppIdentifier:(id)arg1 position:(long long)arg2 ;
-(void)setCampaignToken:(NSString *)arg1 ;
-(NSString *)campaignToken;
-(void)setProviderToken:(NSString *)arg1 ;
-(NSString *)providerToken;
-(void)setUserDismissible:(BOOL)arg1 ;
-(BOOL)userDismissible;
-(void)setAdditionalValue:(id)arg1 forKey:(id)arg2 ;
-(id)additionalValueForKey:(id)arg1 ;
@end

