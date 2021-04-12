/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol C2NetworkingDelegate;
@class NSString, NSDictionary, C2MetricOptions, NSURL, NSObject;

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL __allowsExpensiveAccess;
	BOOL __allowsPowerNapScheduling;
	BOOL _tlsPinning;
	BOOL _allowRouting;
	BOOL _allowExpiredDNSBehavior;
	BOOL __allowsRetryForBackgroundDataTasks;
	BOOL _redactRemoteEndpointFromNetworkMetrics;
	BOOL _useAdaptiveTimeouts;
	BOOL _outOfProcessDiscretionary;
	BOOL _metricRequest;
	long long _qualityOfService;
	NSString* _outOfProcessPoolName;
	double __timeoutIntervalForRequest;
	double __timeoutIntervalForResource;
	NSString* __sourceApplicationBundleIdentifier;
	NSString* __sourceApplicationSecondaryIdentifier;
	NSString* __appleIDContextSessionIdentifier;
	unsigned long long _discretionaryNetworkBehavior;
	unsigned long long _duetPreClearedMode;
	NSString* _identifier;
	NSDictionary* _resolvedEndpointsWithHostname;
	C2MetricOptions* _metricOptions;
	NSURL* _c2MetricsEndpoint;
	unsigned long long _c2MetricsReportFrequency;
	unsigned long long _c2MetricsReportFrequencyBase;
	NSString* _originalHost;
	/*^block*/id _testBehavior_sessionGroupCreated;
	NSURL* _invokedURL;
	NSObject*<C2NetworkingDelegate> _networkingDelegate;

}

@property (nonatomic,copy) NSString * originalHost;                                                  //@synthesize originalHost=_originalHost - In the implementation block
@property (assign,nonatomic) BOOL metricRequest;                                                     //@synthesize metricRequest=_metricRequest - In the implementation block
@property (nonatomic,readonly) double emptySessionExpiryInSeconds; 
@property (nonatomic,readonly) double taskCallbackConsideredHangInSeconds; 
@property (nonatomic,readonly) BOOL outOfProcess; 
@property (nonatomic,copy) id testBehavior_sessionGroupCreated;                                      //@synthesize testBehavior_sessionGroupCreated=_testBehavior_sessionGroupCreated - In the implementation block
@property (nonatomic,copy) NSURL * invokedURL;                                                       //@synthesize invokedURL=_invokedURL - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<C2NetworkingDelegate> networkingDelegate;              //@synthesize networkingDelegate=_networkingDelegate - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) NSString * outOfProcessPoolName;                                          //@synthesize outOfProcessPoolName=_outOfProcessPoolName - In the implementation block
@property (assign,nonatomic) BOOL _allowsExpensiveAccess;                                            //@synthesize _allowsExpensiveAccess=__allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL _allowsPowerNapScheduling;                                         //@synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) double _timeoutIntervalForRequest;                                      //@synthesize _timeoutIntervalForRequest=__timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double _timeoutIntervalForResource;                                     //@synthesize _timeoutIntervalForResource=__timeoutIntervalForResource - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationBundleIdentifier;                            //@synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;                         //@synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _appleIDContextSessionIdentifier;                              //@synthesize _appleIDContextSessionIdentifier=__appleIDContextSessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL tlsPinning;                                                        //@synthesize tlsPinning=_tlsPinning - In the implementation block
@property (assign,nonatomic) BOOL allowRouting;                                                      //@synthesize allowRouting=_allowRouting - In the implementation block
@property (assign,nonatomic) BOOL allowExpiredDNSBehavior;                                           //@synthesize allowExpiredDNSBehavior=_allowExpiredDNSBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                        //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long duetPreClearedMode;                                  //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (assign,nonatomic) BOOL _allowsRetryForBackgroundDataTasks;                                //@synthesize _allowsRetryForBackgroundDataTasks=__allowsRetryForBackgroundDataTasks - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * resolvedEndpointsWithHostname;                             //@synthesize resolvedEndpointsWithHostname=_resolvedEndpointsWithHostname - In the implementation block
@property (nonatomic,copy) C2MetricOptions * metricOptions;                                          //@synthesize metricOptions=_metricOptions - In the implementation block
@property (assign,nonatomic) BOOL redactRemoteEndpointFromNetworkMetrics;                            //@synthesize redactRemoteEndpointFromNetworkMetrics=_redactRemoteEndpointFromNetworkMetrics - In the implementation block
@property (assign,nonatomic) BOOL useAdaptiveTimeouts;                                               //@synthesize useAdaptiveTimeouts=_useAdaptiveTimeouts - In the implementation block
@property (assign,nonatomic) BOOL outOfProcessDiscretionary;                                         //@synthesize outOfProcessDiscretionary=_outOfProcessDiscretionary - In the implementation block
@property (nonatomic,copy) NSURL * c2MetricsEndpoint;                                                //@synthesize c2MetricsEndpoint=_c2MetricsEndpoint - In the implementation block
@property (assign,nonatomic) unsigned long long c2MetricsReportFrequency;                            //@synthesize c2MetricsReportFrequency=_c2MetricsReportFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long c2MetricsReportFrequencyBase;                        //@synthesize c2MetricsReportFrequencyBase=_c2MetricsReportFrequencyBase - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)stringForQualityOfService:(long long)arg1 ;
+(id)stringForDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
+(id)stringForDuetPreClearedMode:(unsigned long long)arg1 ;
+(BOOL)triesteMetricsEnabled;
-(void)setQualityOfService:(long long)arg1 ;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(BOOL)_allowsRetryForBackgroundDataTasks;
-(id)init;
-(double)_timeoutIntervalForResource;
-(void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1 ;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(unsigned long long)discretionaryNetworkBehavior;
-(double)_timeoutIntervalForRequest;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowExpiredDNSBehavior;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(void)setTlsPinning:(BOOL)arg1 ;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)set_allowsExpensiveAccess:(BOOL)arg1 ;
-(BOOL)_allowsPowerNapScheduling;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(void)set_allowsPowerNapScheduling:(BOOL)arg1 ;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(unsigned long long)hash;
-(NSString *)_sourceApplicationBundleIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(C2MetricOptions *)metricOptions;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_allowsExpensiveAccess;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyAndDecorateRequest:(id)arg1 ;
-(NSURL *)c2MetricsEndpoint;
-(void)setC2MetricsEndpoint:(NSURL *)arg1 ;
-(void)setMetricRequest:(BOOL)arg1 ;
-(void)setOutOfProcessPoolName:(NSString *)arg1 ;
-(void)set_appleIDContextSessionIdentifier:(NSString *)arg1 ;
-(void)setResolvedEndpointsWithHostname:(NSDictionary *)arg1 ;
-(BOOL)metricRequest;
-(BOOL)tlsPinning;
-(NSObject*<C2NetworkingDelegate>)networkingDelegate;
-(void)setNetworkingDelegate:(NSObject*<C2NetworkingDelegate>)arg1 ;
-(id)sessionConfigurationNameWithRouteHost:(id)arg1 ;
-(double)taskCallbackConsideredHangInSeconds;
-(BOOL)outOfProcess;
-(NSString *)outOfProcessPoolName;
-(NSString *)_appleIDContextSessionIdentifier;
-(BOOL)redactRemoteEndpointFromNetworkMetrics;
-(void)set_timeoutIntervalForRequest:(double)arg1 ;
-(void)setAllowRouting:(BOOL)arg1 ;
-(void)setAllowExpiredDNSBehavior:(BOOL)arg1 ;
-(void)setRedactRemoteEndpointFromNetworkMetrics:(BOOL)arg1 ;
-(void)setOriginalHost:(NSString *)arg1 ;
-(void)setInvokedURL:(NSURL *)arg1 ;
-(void)setTestBehavior_sessionGroupCreated:(id)arg1 ;
-(id)defaultSessionConfigurationWithName:(id)arg1 ;
-(BOOL)allowRouting;
-(NSDictionary *)resolvedEndpointsWithHostname;
-(NSString *)originalHost;
-(NSURL *)invokedURL;
-(void)setOutOfProcess:(BOOL)arg1 ;
-(id)sessionConfigurationWithName:(id)arg1 ;
-(id)decorateTask:(id)arg1 ;
-(double)emptySessionExpiryInSeconds;
-(BOOL)useAdaptiveTimeouts;
-(void)setUseAdaptiveTimeouts:(BOOL)arg1 ;
-(BOOL)outOfProcessDiscretionary;
-(void)setOutOfProcessDiscretionary:(BOOL)arg1 ;
-(unsigned long long)c2MetricsReportFrequency;
-(void)setC2MetricsReportFrequency:(unsigned long long)arg1 ;
-(unsigned long long)c2MetricsReportFrequencyBase;
-(void)setC2MetricsReportFrequencyBase:(unsigned long long)arg1 ;
-(id)testBehavior_sessionGroupCreated;
@end

