/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSNumber, NSURL, NSString, TSAnalyticsReferral;

@interface TSFeedViewContext : NSObject {

	 presentationReason;
	 feedPickerSection;
	 feedPickerType;
	??? sourceURL;
	 sourceApplication;
	 userActivityType;
	 sourceSearchText;
	 adPreviewID;
	 adPreviewSessionID;
	 maximumAdRequestsForCurrentAdPreviewID;
	 displayRank;
	 externalAnalyticsFeedReferrer;
	 referral;
	 previousArticleID;
	 previousArticleVersion;
	 showSubscribedAlert;

}

@property (retain,nonatomic) NSNumber * presentationReason; 
@property (retain,nonatomic) NSNumber * feedPickerSection; 
@property (retain,nonatomic) NSNumber * feedPickerType; 
@property (copy,nonatomic) NSURL * sourceURL; 
@property (copy,nonatomic) NSString * sourceApplication; 
@property (copy,nonatomic) NSString * userActivityType; 
@property (copy,nonatomic) NSString * sourceSearchText; 
@property (copy,nonatomic) NSString * adPreviewID; 
@property (copy,nonatomic) NSString * adPreviewSessionID; 
@property (retain,nonatomic) NSNumber * maximumAdRequestsForCurrentAdPreviewID; 
@property (retain,nonatomic) NSNumber * displayRank; 
@property (retain,nonatomic) NSNumber * externalAnalyticsFeedReferrer; 
@property (retain,nonatomic) TSAnalyticsReferral * referral; 
@property (copy,nonatomic) NSString * previousArticleID; 
@property (retain,nonatomic) NSNumber * previousArticleVersion; 
@property (assign,nonatomic) BOOL showSubscribedAlert; 
-(id)init;
-(NSString *)userActivityType;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSString *)sourceApplication;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setDisplayRank:(NSNumber *)arg1 ;
-(NSNumber *)displayRank;
-(void)setPreviousArticleVersion:(NSNumber *)arg1 ;
-(NSNumber *)previousArticleVersion;
-(NSNumber *)presentationReason;
-(void)setPresentationReason:(NSNumber *)arg1 ;
-(NSString *)previousArticleID;
-(NSString *)adPreviewSessionID;
-(NSString *)adPreviewID;
-(NSNumber *)maximumAdRequestsForCurrentAdPreviewID;
-(TSAnalyticsReferral *)referral;
-(void)setReferral:(TSAnalyticsReferral *)arg1 ;
-(NSNumber *)feedPickerSection;
-(void)setFeedPickerSection:(NSNumber *)arg1 ;
-(NSNumber *)feedPickerType;
-(void)setFeedPickerType:(NSNumber *)arg1 ;
-(NSString *)sourceSearchText;
-(void)setSourceSearchText:(NSString *)arg1 ;
-(void)setAdPreviewID:(NSString *)arg1 ;
-(void)setAdPreviewSessionID:(NSString *)arg1 ;
-(void)setMaximumAdRequestsForCurrentAdPreviewID:(NSNumber *)arg1 ;
-(NSNumber *)externalAnalyticsFeedReferrer;
-(void)setExternalAnalyticsFeedReferrer:(NSNumber *)arg1 ;
-(void)setPreviousArticleID:(NSString *)arg1 ;
-(BOOL)showSubscribedAlert;
-(void)setShowSubscribedAlert:(BOOL)arg1 ;
-(void)setWithPresentationReason:(int)arg1 ;
-(void)setWithFeedPickerSection:(int)arg1 ;
-(void)setWithFeedPickerType:(int)arg1 ;
-(void)setWithSourceURL:(id)arg1 ;
-(void)setWithSourceApplication:(id)arg1 ;
-(void)setWithUserActivityType:(id)arg1 ;
-(void)setWithSourceSearchText:(id)arg1 ;
-(void)setWithAdPreviewID:(id)arg1 ;
-(void)setWithAdPreviewSessionID:(id)arg1 ;
-(void)setWithMaximumAdRequestsForCurrentAdPreviewID:(long long)arg1 ;
-(void)setWithDisplayRank:(long long)arg1 ;
-(void)setWithExternalAnalyticsFeedReferrer:(long long)arg1 ;
-(void)setWithReferral:(id)arg1 ;
-(void)setWithPreviousArticleID:(id)arg1 ;
-(void)setWithPreviousArticleVersion:(long long)arg1 ;
-(void)setWithShowSubscribedAlert:(BOOL)arg1 ;
@end

