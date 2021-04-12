/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, ACAccount, NSObject, NSNumber, NSDictionary, NSString;

@interface AMSMetricsEvent : NSObject <NSCopying> {

	NSMutableDictionary* _underlyingDictionary;
	ACAccount* _account;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSNumber* _databasePID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSDictionary * databaseEventBody; 
@property (nonatomic,retain) NSString * clientEventID; 
@property (nonatomic,retain) NSNumber * databasePID;                                    //@synthesize databasePID=_databasePID - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryForPosting; 
@property (nonatomic,retain) NSString * diagnosticsSubmissionBugType; 
@property (assign,nonatomic) BOOL preventSampling; 
@property (nonatomic,readonly) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * app; 
@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSString * canaryIdentifier; 
@property (nonatomic,retain) NSNumber * eventTime; 
@property (nonatomic,retain) NSString * eventType; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (nonatomic,retain) NSNumber * timezoneOffset; 
@property (nonatomic,retain) NSString * topic; 
+(id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1 ;
+(id)_topicFromAuthenticationContext:(id)arg1 ;
+(id)_buyParamsStringFromAuthenticationContext:(id)arg1 ;
+(id)_buyParamsFromString:(id)arg1 ;
+(id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2 ;
+(BOOL)_isValidJSONProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)topic;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)eventType;
-(void)setTopic:(NSString *)arg1 ;
-(NSNumber *)baseVersion;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setEventTime:(NSNumber *)arg1 ;
-(NSNumber *)eventTime;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSNumber *)timezoneOffset;
-(id)initWithTopic:(id)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(NSMutableDictionary *)underlyingDictionary;
-(id)initWithUnderlyingDictionary:(id)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(NSString *)clientEventID;
-(void)setClientEventID:(NSString *)arg1 ;
-(NSString *)diagnosticsSubmissionBugType;
-(NSDictionary *)dictionaryForPosting;
-(NSNumber *)databasePID;
-(id)initWithDatabaseEventBody:(id)arg1 ;
-(void)setDatabasePID:(NSNumber *)arg1 ;
-(NSDictionary *)databaseEventBody;
-(id)propertyForBodyKey:(id)arg1 ;
-(id)_propertyForBodyKey:(id)arg1 clientOnly:(BOOL)arg2 ;
-(void)_setProperty:(id)arg1 forBodyKey:(id)arg2 clientOnly:(BOOL)arg3 ;
-(NSString *)app;
-(NSString *)canaryIdentifier;
-(NSNumber *)eventVersion;
-(BOOL)preventSampling;
-(void)setApp:(NSString *)arg1 ;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(void)setDiagnosticsSubmissionBugType:(NSString *)arg1 ;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(void)setPreventSampling:(BOOL)arg1 ;
-(void)setTimezoneOffset:(NSNumber *)arg1 ;
-(void)removePropertiesForKeys:(id)arg1 ;
@end

