/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCloudID:(unsigned long long)arg1 ;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(void)setRadioAdamID:(long long)arg1 ;
-(void)setTvShowPurchasedAdamID:(long long)arg1 ;
-(void)setTvShowSubscriptionAdamID:(long long)arg1 ;
@end

