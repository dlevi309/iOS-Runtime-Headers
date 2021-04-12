/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldSuppressUserInfo;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2 ;
-(id)decorateReportingURL:(id)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(double)timeIntervalFromMilliseconds:(id)arg1 ;
-(id)millisecondsFromTimeInterval:(double)arg1 ;
-(id)_dictionaryRepresentationOfBody;
-(void)appendPropertiesToBody:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
@end

