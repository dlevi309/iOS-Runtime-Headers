/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSURL, NSString, NSDate, TSAnalyticsReferral;

@interface TSArticleContext : NSObject {

	 title;
	 sourceApplication;
	 previousArticleID;
	 previousArticleVersion;
	 adPreviewSessionID;
	 adPreviewID;
	 adQToken;
	 maximumAdRequestsForCurrentAdPreviewID;
	 presentationReason;
	 notificationID;
	 notificationSenderChannelID;
	 shouldAutoPlayVideo;
	 referral;

}

@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * sourceApplication; 
@property (readonly,nonatomic) NSString * previousArticleID; 
@property (readonly,nonatomic) NSString * previousArticleVersion; 
@property (readonly,nonatomic) NSString * adPreviewSessionID; 
@property (readonly,nonatomic) NSString * adPreviewID; 
@property (readonly,nonatomic) NSString * adQToken; 
@property (readonly,nonatomic) long long maximumAdRequestsForCurrentAdPreviewID; 
@property (readonly,nonatomic) NSDate * userActionDate; 
@property (readonly,nonatomic) long long presentationReason; 
@property (readonly,nonatomic) NSString * notificationID; 
@property (readonly,nonatomic) NSString * notificationSenderChannelID; 
@property (readonly,nonatomic) BOOL shouldAutoPlayVideo; 
@property (retain,nonatomic) TSAnalyticsReferral * referral; 
-(long long)presentationReason;
-(NSString *)previousArticleVersion;
-(NSString *)sourceApplication;
-(NSString *)adQToken;
-(id)init;
-(NSString *)notificationSenderChannelID;
-(id)initWithUrl:(id)arg1 title:(id)arg2 sourceApplication:(id)arg3 previousArticleID:(id)arg4 previousArticleVersion:(id)arg5 adPreviewSessionID:(id)arg6 adPreviewID:(id)arg7 adQToken:(id)arg8 maximumAdRequestsForCurrentAdPreviewID:(long long)arg9 userActionDate:(id)arg10 presentationReason:(long long)arg11 notificationID:(id)arg12 notificationSenderChannelID:(id)arg13 referral:(id)arg14 shouldAutoPlayVideo:(BOOL)arg15 ;
-(NSURL *)url;
-(BOOL)shouldAutoPlayVideo;
-(NSDate *)userActionDate;
-(NSString *)adPreviewSessionID;
-(NSString *)previousArticleID;
-(NSString *)notificationID;
-(NSString *)adPreviewID;
-(void)setReferral:(TSAnalyticsReferral *)arg1 ;
-(long long)maximumAdRequestsForCurrentAdPreviewID;
-(TSAnalyticsReferral *)referral;
-(NSString *)title;
@end

