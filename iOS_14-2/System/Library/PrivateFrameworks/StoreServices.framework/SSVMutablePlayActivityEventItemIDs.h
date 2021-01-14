/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEventItemIDs.h>

@class NSString;

@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs

@property (assign,nonatomic) unsigned long long cloudID; 
@property (nonatomic,copy) NSString * lyricsID; 
@property (assign,nonatomic) long long purchasedAdamID; 
@property (assign,nonatomic) long long radioAdamID; 
@property (assign,nonatomic) long long equivalencySourceAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID; 
@property (assign,nonatomic) long long tvShowPurchasedAdamID; 
@property (assign,nonatomic) long long tvShowSubscriptionAdamID; 
-(void)setTvShowPurchasedAdamID:(long long)arg1 ;
-(void)setTvShowSubscriptionAdamID:(long long)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(void)setRadioAdamID:(long long)arg1 ;
-(void)setCloudID:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

