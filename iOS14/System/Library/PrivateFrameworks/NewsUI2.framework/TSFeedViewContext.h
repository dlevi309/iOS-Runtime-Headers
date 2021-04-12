/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSNumber, NSString, TSAnalyticsReferral, NSURL;

@interface TSFeedViewContext : NSObject {

	 feedTagType;
	 presentationReason;
	 feedPickerSection;
	 feedPickerType;
	 displayRank;
	 externalAnalyticsFeedReferrer;
	 previousArticleID;
	 previousArticleVersion;
	 showSubscribedAlert;
	 referral;
	 title;
	 tagName;
	 sourceApplication;
	 userActivityType;
	 sourceSearchText;
	 adPreviewID;
	 adPreviewSessionID;
	 adQToken;
	 maximumAdRequestsForCurrentAdPreviewID;

}

@property (retain,nonatomic) NSNumber * presentationReason; 
@property (retain,nonatomic) NSNumber * feedPickerSection; 
@property (retain,nonatomic) NSNumber * feedPickerType; 
@property (retain,nonatomic) NSNumber * displayRank; 
@property (retain,nonatomic) NSNumber * externalAnalyticsFeedReferrer; 
@property (copy,nonatomic) NSString * previousArticleID; 
@property (retain,nonatomic) NSNumber * previousArticleVersion; 
@property (assign,nonatomic) BOOL showSubscribedAlert; 
@property (retain,nonatomic) TSAnalyticsReferral * referral; 
@property (copy,nonatomic) NSURL * sourceURL; 
@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * tagName; 
@property (copy,nonatomic) NSString * sourceApplication; 
@property (copy,nonatomic) NSString * userActivityType; 
@property (copy,nonatomic) NSString * sourceSearchText; 
@property (copy,nonatomic) NSString * adPreviewID; 
@property (copy,nonatomic) NSString * adPreviewSessionID; 
@property (copy,nonatomic) NSString * adQToken; 
@property (retain,nonatomic) NSNumber * maximumAdRequestsForCurrentAdPreviewID; 
-(NSNumber *)presentationReason;
-(NSNumber *)displayRank;
-(NSString *)userActivityType;
-(void)setPreviousArticleVersion:(NSNumber *)arg1 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSNumber *)previousArticleVersion;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSURL *)sourceURL;
-(NSString *)sourceApplication;
-(void)setDisplayRank:(NSNumber *)arg1 ;
-(NSString *)adQToken;
-(id)init;
-(NSString *)tagName;
-(void)setPresentationReason:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSourceApplication:(NSString *)arg1 ;
-(NSString *)adPreviewSessionID;
-(NSString *)previousArticleID;
-(void)setTagName:(NSString *)arg1 ;
-(NSString *)adPreviewID;
-(void)setReferral:(TSAnalyticsReferral *)arg1 ;
-(NSNumber *)maximumAdRequestsForCurrentAdPreviewID;
-(TSAnalyticsReferral *)referral;
-(NSString *)title;
-(NSNumber *)feedPickerSection;
-(void)setFeedPickerSection:(NSNumber *)arg1 ;
-(NSNumber *)feedPickerType;
-(void)setFeedPickerType:(NSNumber *)arg1 ;
-(NSNumber *)externalAnalyticsFeedReferrer;
-(void)setExternalAnalyticsFeedReferrer:(NSNumber *)arg1 ;
-(void)setPreviousArticleID:(NSString *)arg1 ;
-(BOOL)showSubscribedAlert;
-(void)setShowSubscribedAlert:(BOOL)arg1 ;
-(NSString *)sourceSearchText;
-(void)setSourceSearchText:(NSString *)arg1 ;
-(void)setAdPreviewID:(NSString *)arg1 ;
-(void)setAdPreviewSessionID:(NSString *)arg1 ;
-(void)setAdQToken:(NSString *)arg1 ;
-(void)setMaximumAdRequestsForCurrentAdPreviewID:(NSNumber *)arg1 ;
-(void)setWithPresentationReason:(int)arg1 ;
-(void)setWithFeedPickerSection:(int)arg1 ;
-(void)setWithFeedPickerType:(int)arg1 ;
-(void)setWithSourceURL:(id)arg1 ;
-(void)setWithSourceApplication:(id)arg1 ;
-(void)setWithUserActivityType:(id)arg1 ;
-(void)setWithSourceSearchText:(id)arg1 ;
-(void)setWithAdPreviewID:(id)arg1 ;
-(void)setWithAdPreviewSessionID:(id)arg1 ;
-(void)setWithAdQToken:(id)arg1 ;
-(void)setWithMaximumAdRequestsForCurrentAdPreviewID:(long long)arg1 ;
-(void)setWithDisplayRank:(long long)arg1 ;
-(void)setWithExternalAnalyticsFeedReferrer:(long long)arg1 ;
-(void)setWithReferral:(id)arg1 ;
-(void)setWithPreviousArticleID:(id)arg1 ;
-(void)setWithPreviousArticleVersion:(long long)arg1 ;
-(void)setWithShowSubscribedAlert:(BOOL)arg1 ;
-(void)setFeedTagType:(unsigned long long)arg1 ;
@end

