/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class ACAccount, NSString, NSMutableDictionary, NSArray, AMSMetricsEvent, NSObject;

@interface AMSFollowUpItem : NSObject {

	ACAccount* _account;
	NSString* _identifier;
	NSMutableDictionary* _userInfo;
	BOOL _shouldPostNotification;
	NSArray* _actions;
	long long _displayStyle;
	NSString* _footer;
	NSString* _informativeText;
	AMSMetricsEvent* _metricsEvent;
	NSString* _title;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _metricsQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;               //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSString * backingIdentifier; 
@property (assign,nonatomic) long long displayStyle;                                  //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) NSString * footer;                                       //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * informativeText;                              //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                          //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic) BOOL shouldPostNotification;                             //@synthesize shouldPostNotification=_shouldPostNotification - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
+(id)backingIdentifierForIdentifier:(id)arg1 account:(id)arg2 ;
+(id)componentsFromBackingIdentifier:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(ACAccount *)account;
-(NSString *)footer;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)active;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(NSString *)groupIdentifier;
-(NSMutableDictionary *)userInfo;
-(NSArray *)actions;
-(id)generateItem;
-(NSString *)backingIdentifier;
-(id)initWithFollowUpItem:(id)arg1 ;
-(BOOL)shouldOverwriteItem:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)postMetricsWithBag:(id)arg1 ;
-(id)postMetricsWithBagContract:(id)arg1 ;
-(BOOL)shouldPostNotification;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(void)setDisplayStyle:(long long)arg1 ;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)priority;
-(void)setShouldPostNotification:(BOOL)arg1 ;
-(NSString *)informativeText;
-(id)initWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSString *)title;
-(NSString *)logKey;
-(long long)displayStyle;
@end

