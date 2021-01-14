/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {

	NSMutableDictionary* _mutableBody;
	BOOL _shouldSuppressUserInfo;
	BOOL _shouldSuppressDSIDHeader;

}

@property (nonatomic,copy,readonly) NSDictionary * bodyDictionary;              //@synthesize mutableBody=_mutableBody - In the implementation block
@property (nonatomic,retain) NSNumber * accountIdentifier; 
@property (nonatomic,retain) NSString * connection; 
@property (nonatomic,retain) NSString * eventType; 
@property (assign) double originalTime; 
@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (nonatomic,retain) NSString * applicationIdentifier; 
@property (nonatomic,retain) NSNumber * clientVersion; 
@property (nonatomic,retain) NSString * hostApplicationIdentifier; 
@property (nonatomic,retain) NSNumber * previousClientVersion; 
@property (nonatomic,retain) NSString * userAgent; 
@property (assign,nonatomic) BOOL shouldSuppressUserInfo;                       //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDSIDHeader;                     //@synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader - In the implementation block
@property (nonatomic,retain) NSString * canaryIdentifier; 
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)setTopic:(NSString *)arg1 ;
-(id)init;
-(NSString *)topic;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(NSNumber *)clientVersion;
-(NSNumber *)accountIdentifier;
-(id)debugDescription;
-(id)propertyForBodyKey:(id)arg1 ;
-(NSNumber *)eventVersion;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
-(void)setOriginalTimeUsingDate:(id)arg1 ;
-(double)originalTime;
-(void)setOriginalTime:(double)arg1 ;
-(NSNumber *)previousClientVersion;
-(void)setPreviousClientVersion:(NSNumber *)arg1 ;
-(void)setShouldSuppressDSIDHeader:(BOOL)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(NSString *)connection;
-(NSString *)canaryIdentifier;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(NSString *)userAgent;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setConnection:(NSString *)arg1 ;
-(BOOL)shouldSuppressUserInfo;
-(NSNumber *)baseVersion;
-(NSString *)hostApplicationIdentifier;
-(id)decorateReportingURL:(id)arg1 ;
-(void)setClientVersion:(NSNumber *)arg1 ;
-(NSDictionary *)bodyDictionary;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
@end

