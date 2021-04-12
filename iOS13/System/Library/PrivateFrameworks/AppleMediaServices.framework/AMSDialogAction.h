/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, AMSMetricsEvent, NSURLRequest, NSMutableDictionary;

@interface AMSDialogAction : NSObject <NSSecureCoding> {

	BOOL _inferLinkDestination;
	BOOL _shouldRetry;
	NSURL* _deepLink;
	NSString* _identifier;
	AMSMetricsEvent* _metricsEvent;
	NSURLRequest* _request;
	long long _style;
	NSString* _title;
	NSMutableDictionary* _userInfo;

}

@property (assign,setter=ams_setActionType:,nonatomic) long long ams_actionType; 
@property (setter=ams_setSubtarget:,nonatomic,retain) NSString * ams_subtarget; 
@property (assign,setter=ams_setURLType:,nonatomic) long long ams_URLType; 
@property (nonatomic,copy) NSURL * deepLink;                                                  //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL inferLinkDestination;                                       //@synthesize inferLinkDestination=_inferLinkDestination - In the implementation block
@property (nonatomic,copy) AMSMetricsEvent * metricsEvent;                                    //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,copy) NSURLRequest * request;                                            //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long style;                                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                                //@synthesize shouldRetry=_shouldRetry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg1 identifier:(id)arg2 ;
+(id)actionWithTitle:(id)arg1 ;
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 ;
-(id)init;
-(id)description;
-(NSMutableDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(NSURL *)deepLink;
-(BOOL)inferLinkDestination;
-(BOOL)shouldRetry;
-(void)setDeepLink:(NSURL *)arg1 ;
-(void)setInferLinkDestination:(BOOL)arg1 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(long long)ams_actionType;
-(NSString *)ams_subtarget;
-(void)ams_setActionType:(long long)arg1 ;
-(void)ams_setSubtarget:(id)arg1 ;
-(void)ams_setURLType:(long long)arg1 ;
-(long long)ams_URLType;
@end

