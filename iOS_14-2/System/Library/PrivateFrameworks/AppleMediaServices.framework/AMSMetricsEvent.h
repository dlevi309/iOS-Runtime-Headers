/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, ACAccount, NSObject, NSNumber, NSString, NSDictionary;

@interface AMSMetricsEvent : NSObject <NSCopying> {

	NSMutableDictionary* _underlyingDictionary;
	ACAccount* _account;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSNumber* _databasePID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSString * clientEventID; 
@property (nonatomic,readonly) NSDictionary * databaseEventBody; 
@property (nonatomic,retain) NSNumber * databasePID;                                    //@synthesize databasePID=_databasePID - In the implementation block
@property (nonatomic,readonly) BOOL engagementEvent; 
@property (nonatomic,readonly) NSDictionary * dictionaryForPosting; 
@property (assign,nonatomic) BOOL checkDiagnosticsAndUsageSetting; 
@property (nonatomic,retain) NSString * diagnosticsSubmissionBugType; 
@property (assign,nonatomic) BOOL preventSampling; 
@property (nonatomic,readonly) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (assign,getter=isAnonymous,nonatomic) BOOL anonymous; 
@property (nonatomic,retain) NSString * app; 
@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSString * canaryIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier; 
@property (nonatomic,retain) NSNumber * eventTime; 
@property (nonatomic,retain) NSString * eventType; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (nonatomic,retain) NSNumber * timezoneOffset; 
@property (nonatomic,retain) NSString * topic; 
+(BOOL)_isValidJSONProperty:(id)arg1 ;
+(id)sanitizedObject:(id)arg1 ;
+(id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1 ;
+(id)_topicFromAuthenticationContext:(id)arg1 ;
+(id)_buyParamsStringFromAuthenticationContext:(id)arg1 ;
+(id)_buyParamsFromString:(id)arg1 ;
+(id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2 ;
-(ACAccount *)account;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)isAnonymous;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)appVersion;
-(NSString *)topic;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(NSString *)osVersion;
-(NSDictionary *)dictionaryForPosting;
-(BOOL)engagementEvent;
-(NSString *)clientEventID;
-(void)setClientEventID:(NSString *)arg1 ;
-(NSString *)diagnosticsSubmissionBugType;
-(BOOL)checkDiagnosticsAndUsageSetting;
-(void)setDatabasePID:(NSNumber *)arg1 ;
-(id)initWithDatabaseEventBody:(id)arg1 ;
-(NSDictionary *)databaseEventBody;
-(void)_setProperty:(id)arg1 forBodyKey:(id)arg2 clientOnly:(BOOL)arg3 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(id)_propertyForBodyKey:(id)arg1 clientOnly:(BOOL)arg2 ;
-(id)initForEngagement;
-(NSNumber *)eventVersion;
-(BOOL)preventSampling;
-(NSNumber *)timezoneOffset;
-(void)setCheckDiagnosticsAndUsageSetting:(BOOL)arg1 ;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(void)setDiagnosticsSubmissionBugType:(NSString *)arg1 ;
-(void)setPreventSampling:(BOOL)arg1 ;
-(void)setTimezoneOffset:(NSNumber *)arg1 ;
-(void)addClientIdentifier:(id)arg1 ;
-(void)removePropertiesForKeys:(id)arg1 ;
-(void)setApp:(NSString *)arg1 ;
-(NSString *)canaryIdentifier;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(id)initWithTopic:(id)arg1 ;
-(NSString *)app;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(void)setAnonymous:(BOOL)arg1 ;
-(NSNumber *)eventTime;
-(NSString *)clientIdentifier;
-(NSNumber *)baseVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEventTime:(NSNumber *)arg1 ;
-(NSNumber *)databasePID;
-(NSMutableDictionary *)underlyingDictionary;
-(id)initWithUnderlyingDictionary:(id)arg1 ;
@end

