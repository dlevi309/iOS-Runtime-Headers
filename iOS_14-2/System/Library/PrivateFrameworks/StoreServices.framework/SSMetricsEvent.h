/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString;

@interface SSMetricsEvent : NSObject {

	BOOL _shouldSuppressUserInfo;
	BOOL _shouldSuppressDSIDHeader;
	NSString* _eventType;

}

@property (nonatomic,retain,readonly) NSString * eventType;                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressUserInfo;                //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressDSIDHeader;              //@synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader - In the implementation block
+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)arg1 ;
-(NSString *)eventType;
-(BOOL)isFieldBlacklistEnabled;
-(id)_dictionaryRepresentationOfBody;
-(void)appendPropertiesToBody:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
-(BOOL)shouldSuppressUserInfo;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(id)decorateReportingURL:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(double)timeIntervalFromMilliseconds:(id)arg1 ;
-(id)millisecondsFromTimeInterval:(double)arg1 ;
@end

