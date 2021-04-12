/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPathEvaluator, NSURL, NSURLSession, WFSettingsManager, NSString;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSURLSessionTaskDelegate, NSCopying> {

	os_unfair_lock_s _serviceConnectivityEvaluationURLLock;
	os_unfair_lock_s _serviceConnectivityEvaluatorLock;
	NWPathEvaluator* _serviceConnectivityEvaluator;
	NSURL* _serviceConnectivityEvaluationURL;
	NSURLSession* _session;
	NSURL* _cacheURL;
	Class _cacheClass;
	WFSettingsManager* _settingsManager;

}

@property (assign,nonatomic) os_unfair_lock_s serviceConnectivityEvaluationURLLock;              //@synthesize serviceConnectivityEvaluationURLLock=_serviceConnectivityEvaluationURLLock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s serviceConnectivityEvaluatorLock;                  //@synthesize serviceConnectivityEvaluatorLock=_serviceConnectivityEvaluatorLock - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) Class cacheClass;                                                   //@synthesize cacheClass=_cacheClass - In the implementation block
@property (nonatomic,retain) NSURL * serviceConnectivityEvaluationURL;                           //@synthesize serviceConnectivityEvaluationURL=_serviceConnectivityEvaluationURL - In the implementation block
@property (nonatomic,retain) WFSettingsManager * settingsManager;                                //@synthesize settingsManager=_settingsManager - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSString * apiVersion; 
@property (nonatomic,copy) NSURL * cacheURL;                                                     //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * serviceConnectivityEvaluator;                   //@synthesize serviceConnectivityEvaluator=_serviceConnectivityEvaluator - In the implementation block
@property (nonatomic,readonly) BOOL isServiceAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
+(id)generateUserAgent;
+(id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(NSString *)apiVersion;
-(NSURL *)cacheURL;
-(void)setCacheURL:(NSURL *)arg1 ;
-(void)setSettingsManager:(WFSettingsManager *)arg1 ;
-(void)setCacheClass:(Class)arg1 ;
-(void)setServiceConnectivityEvaluationURLLock:(os_unfair_lock_s)arg1 ;
-(void)setServiceConnectivityEvaluatorLock:(os_unfair_lock_s)arg1 ;
-(WFSettingsManager *)settingsManager;
-(id)apiConfigurationForAPIVersion:(id)arg1 ;
-(NSURL *)serviceConnectivityEvaluationURL;
-(void)setServiceConnectivityEvaluationURL:(NSURL *)arg1 ;
-(BOOL)isServiceAvailableSync;
-(id)apiConfiguration;
-(Class)cacheClass;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id*)arg5 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 apiVersion:(id)arg6 error:(id*)arg7 ;
-(BOOL)isServiceAvailable;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(NWPathEvaluator *)serviceConnectivityEvaluator;
-(os_unfair_lock_s)serviceConnectivityEvaluationURLLock;
-(os_unfair_lock_s)serviceConnectivityEvaluatorLock;
@end

