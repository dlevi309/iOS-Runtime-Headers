/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)connection;
-(NSString *)applicationIdentifier;
-(void)setConnection:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)topic;
-(NSNumber *)accountIdentifier;
-(NSString *)eventType;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSNumber *)baseVersion;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSDictionary *)bodyDictionary;
-(NSNumber *)clientVersion;
-(void)setClientVersion:(NSNumber *)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(NSString *)canaryIdentifier;
-(NSNumber *)eventVersion;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(BOOL)shouldSuppressUserInfo;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(id)decorateReportingURL:(id)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
-(void)setOriginalTimeUsingDate:(id)arg1 ;
-(double)originalTime;
-(void)setOriginalTime:(double)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(NSNumber *)previousClientVersion;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setPreviousClientVersion:(NSNumber *)arg1 ;
-(void)setShouldSuppressDSIDHeader:(BOOL)arg1 ;
@end

