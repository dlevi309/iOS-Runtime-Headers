/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, AMSMetricsEvent, NSURL, NSObject, NSURLRequest;

@interface AMSFollowUpAction : NSObject {

	NSMutableDictionary* _userInfo;
	NSString* _identifier;
	NSString* _label;
	AMSMetricsEvent* _metricsEvent;
	NSURL* _url;
	NSString* _backingIdentifier;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _actionQueue;

}

@property (nonatomic,retain) NSString * backingIdentifier;                            //@synthesize backingIdentifier=_backingIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> actionQueue;                //@synthesize actionQueue=_actionQueue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                          //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSString * parentIdentifier; 
@property (nonatomic,retain) NSString * preferredClient; 
@property (nonatomic,retain) NSURLRequest * request; 
@property (assign,nonatomic) BOOL requiresFollowUpUI; 
@property (assign,nonatomic) BOOL shouldClear; 
@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo; 
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)backingIdentifier;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)initWithAction:(id)arg1 parentIdentifier:(id)arg2 ;
-(void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)preferredClient;
-(BOOL)requiresFollowUpUI;
-(id)performActionsWithBag:(id)arg1 account:(id)arg2 ;
-(id)initWithItem:(id)arg1 action:(id)arg2 ;
-(void)setRequiresFollowUpUI:(BOOL)arg1 ;
-(void)setShouldClear:(BOOL)arg1 ;
-(id)generateAction;
-(id)postMetricsWithBag:(id)arg1 ;
-(id)postMetricsWithBagContract:(id)arg1 ;
-(id)performActionsWithContract:(id)arg1 account:(id)arg2 ;
-(void)setBackingIdentifier:(NSString *)arg1 ;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(NSString *)parentIdentifier;
-(void)setLogKey:(NSString *)arg1 ;
-(NSURL *)url;
-(NSURLRequest *)request;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPreferredClient:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 parentIdentifier:(id)arg2 ;
-(NSString *)label;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(BOOL)shouldClear;
-(NSString *)logKey;
@end

