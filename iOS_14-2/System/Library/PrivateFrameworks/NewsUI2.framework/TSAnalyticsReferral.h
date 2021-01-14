/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSString, NTPBWidgetEngagement;

@interface TSAnalyticsReferral : NSObject {

	 userActivityType;
	 creativeID;
	 campaignID;
	 campaignType;
	 referringApplication;
	 referringURL;
	 widgetModeGroupID;
	 widgetEngagement;
	 appOpenedByUserActivity;
	 appSessionStartMethod;
	 appSessionStartNotificationType;

}

@property (readonly,nonatomic) NSString * userActivityType; 
@property (readonly,nonatomic) NSString * creativeID; 
@property (readonly,nonatomic) NSString * campaignID; 
@property (readonly,nonatomic) NSString * campaignType; 
@property (readonly,nonatomic) NSString * referringApplication; 
@property (readonly,nonatomic) NSString * referringURL; 
@property (readonly,nonatomic) NSString * widgetModeGroupID; 
@property (readonly,nonatomic) NTPBWidgetEngagement * widgetEngagement; 
@property (readonly,nonatomic) BOOL appOpenedByUserActivity; 
@property (readonly,nonatomic) int appSessionStartMethod; 
@property (readonly,nonatomic) int appSessionStartNotificationType; 
-(NSString *)userActivityType;
-(NSString *)campaignType;
-(NTPBWidgetEngagement *)widgetEngagement;
-(NSString *)campaignID;
-(id)init;
-(NSString *)referringURL;
-(NSString *)creativeID;
-(NSString *)referringApplication;
-(NSString *)widgetModeGroupID;
-(BOOL)appOpenedByUserActivity;
-(int)appSessionStartMethod;
-(int)appSessionStartNotificationType;
-(id)initWithUserActivityType:(id)arg1 creativeID:(id)arg2 campaignID:(id)arg3 campaignType:(id)arg4 referringApplication:(id)arg5 referringURL:(id)arg6 widgetModeGroupID:(id)arg7 widgetEngagement:(id)arg8 appOpenedByUserActivity:(BOOL)arg9 appSessionStartMethod:(int)arg10 appSessionStartNotificationType:(int)arg11 ;
@end

