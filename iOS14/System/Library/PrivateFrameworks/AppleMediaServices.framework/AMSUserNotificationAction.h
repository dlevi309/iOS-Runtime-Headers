/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSURL, NSURLRequest, AMSMetricsEvent, NSDictionary;

@interface AMSUserNotificationAction : NSObject {

	NSString* _identifier;
	NSURL* _defaultURL;
	NSString* _title;
	NSURLRequest* _request;
	AMSMetricsEvent* _metricsEvent;
	NSDictionary* _userInfo;
	long long _style;

}

@property (nonatomic,readonly) unsigned long long un_ActionOptions; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                 //@synthesize defaultURL=_defaultURL - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                     //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURLRequest *)request;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 ;
-(unsigned long long)un_ActionOptions;
-(id)initWithUserInfoAction:(id)arg1 ;
-(id)generateUserInfoAction;
-(NSURL *)defaultURL;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSString *)identifier;
-(long long)style;
-(NSString *)title;
@end

