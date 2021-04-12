/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/


@class NSString;

@interface NPPurchaseContext : NSObject {

	 conversionLocation;
	 sourceChannelID;
	 productID;
	 purchaseID;
	 articleID;
	 issueID;
	 sectionID;
	 qToken;
	 purchaseSessionID;
	 parentFeedType;
	 arrivedFromAd;
	 webAccessOptIn;
	 creativeID;
	 campaignID;
	 campaignType;

}

@property (copy,nonatomic) NSString * conversionLocation; 
@property (copy,nonatomic) NSString * sourceChannelID; 
@property (copy,nonatomic) NSString * productID; 
@property (copy,nonatomic) NSString * purchaseID; 
@property (copy,nonatomic) NSString * articleID; 
@property (copy,nonatomic) NSString * issueID; 
@property (copy,nonatomic) NSString * sectionID; 
@property (copy,nonatomic) NSString * qToken; 
@property (copy,nonatomic) NSString * purchaseSessionID; 
@property (assign,nonatomic) long long parentFeedType; 
@property (assign,nonatomic) BOOL arrivedFromAd; 
@property (assign,nonatomic) BOOL webAccessOptIn; 
@property (copy,nonatomic) NSString * creativeID; 
@property (copy,nonatomic) NSString * campaignID; 
@property (copy,nonatomic) NSString * campaignType; 
-(id)init;
-(NSString *)productID;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(NSString *)purchaseID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)qToken;
-(void)setQToken:(NSString *)arg1 ;
-(NSString *)articleID;
-(NSString *)issueID;
-(void)setIssueID:(NSString *)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(BOOL)webAccessOptIn;
-(NSString *)sourceChannelID;
-(void)setWebAccessOptIn:(BOOL)arg1 ;
-(void)setSourceChannelID:(NSString *)arg1 ;
-(long long)parentFeedType;
-(void)setParentFeedType:(long long)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(NSString *)campaignType;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(BOOL)arrivedFromAd;
-(NSString *)conversionLocation;
-(void)setConversionLocation:(NSString *)arg1 ;
-(NSString *)purchaseSessionID;
-(void)setPurchaseSessionID:(NSString *)arg1 ;
-(NSString *)creativeID;
-(void)setCreativeID:(NSString *)arg1 ;
-(NSString *)campaignID;
-(void)setCampaignID:(NSString *)arg1 ;
-(id)initWithProductID:(id)arg1 purchaseID:(id)arg2 sourceChannelID:(id)arg3 purchaseSessionID:(id)arg4 conversionLocation:(id)arg5 articleID:(id)arg6 issueID:(id)arg7 parentFeedType:(long long)arg8 sectionID:(id)arg9 webAccessOptIn:(BOOL)arg10 arrivedFromAd:(BOOL)arg11 qToken:(id)arg12 creativeID:(id)arg13 campaignID:(id)arg14 campaignType:(id)arg15 ;
@end

