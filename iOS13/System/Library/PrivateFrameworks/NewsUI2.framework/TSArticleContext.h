/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSURL, NSString, NSDate, TSAnalyticsReferral;

@interface TSArticleContext : NSObject {

	??? url;
	 sourceApplication;
	 previousArticleID;
	 previousArticleVersion;
	 adPreviewSessionID;
	 adPreviewID;
	 maximumAdRequestsForCurrentAdPreviewID;
	??? userActionDate;
	 presentationReason;
	 notificationID;
	 notificationSenderChannelID;
	 referral;

}

@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) NSString * sourceApplication; 
@property (readonly,nonatomic) NSString * previousArticleID; 
@property (readonly,nonatomic) NSString * previousArticleVersion; 
@property (readonly,nonatomic) NSString * adPreviewSessionID; 
@property (readonly,nonatomic) NSString * adPreviewID; 
@property (readonly,nonatomic) long long maximumAdRequestsForCurrentAdPreviewID; 
@property (readonly,nonatomic) NSDate * userActionDate; 
@property (readonly,nonatomic) long long presentationReason; 
@property (readonly,nonatomic) NSString * notificationID; 
@property (readonly,nonatomic) NSString * notificationSenderChannelID; 
@property (retain,nonatomic) TSAnalyticsReferral * referral; 
-(id)init;
-(NSURL *)url;
-(NSString *)sourceApplication;
-(NSString *)notificationID;
-(NSString *)previousArticleVersion;
-(long long)presentationReason;
-(NSString *)previousArticleID;
-(NSString *)adPreviewSessionID;
-(NSString *)adPreviewID;
-(long long)maximumAdRequestsForCurrentAdPreviewID;
-(NSDate *)userActionDate;
-(NSString *)notificationSenderChannelID;
-(TSAnalyticsReferral *)referral;
-(void)setReferral:(TSAnalyticsReferral *)arg1 ;
-(id)initWithUrl:(id)arg1 sourceApplication:(id)arg2 previousArticleID:(id)arg3 previousArticleVersion:(id)arg4 adPreviewSessionID:(id)arg5 adPreviewID:(id)arg6 maximumAdRequestsForCurrentAdPreviewID:(long long)arg7 userActionDate:(id)arg8 presentationReason:(long long)arg9 notificationID:(id)arg10 notificationSenderChannelID:(id)arg11 referral:(id)arg12 ;
@end

