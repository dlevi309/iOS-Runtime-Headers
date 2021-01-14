/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1 ;
+(id)generateUserAgent;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(id)init;
-(void)setCacheURL:(NSURL *)arg1 ;
-(id)apiConfiguration;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 ;
-(void)setServiceConnectivityEvaluationURL:(NSURL *)arg1 ;
-(void)setCacheClass:(Class)arg1 ;
-(id)apiConfigurationForAPIVersion:(id)arg1 ;
-(void)setServiceConnectivityEvaluationURLLock:(os_unfair_lock_s)arg1 ;
-(NSURLSession *)session;
-(void)setServiceConnectivityEvaluatorLock:(os_unfair_lock_s)arg1 ;
-(NSString *)apiVersion;
-(os_unfair_lock_s)serviceConnectivityEvaluatorLock;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(os_unfair_lock_s)serviceConnectivityEvaluationURLLock;
-(BOOL)isValid;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURL *)serviceConnectivityEvaluationURL;
-(id)aqiScaleRequestForScaleNamed:(id)arg1 language:(id)arg2 error:(id*)arg3 ;
-(NSURL *)cacheURL;
-(BOOL)isServiceAvailableSync;
-(Class)cacheClass;
-(NWPathEvaluator *)serviceConnectivityEvaluator;
-(void)invalidate;
-(WFSettingsManager *)settingsManager;
-(BOOL)isServiceAvailable;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 apiVersion:(id)arg7 error:(id*)arg8 ;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id*)arg5 ;
-(id)parseAQIScaleNamed:(id)arg1 language:(id)arg2 data:(id)arg3 apiVersion:(id)arg4 error:(id*)arg5 ;
-(void)setSettingsManager:(WFSettingsManager *)arg1 ;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 apiVersion:(id)arg5 error:(id*)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

