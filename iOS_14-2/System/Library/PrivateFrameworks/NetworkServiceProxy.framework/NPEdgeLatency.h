/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NWEndpoint, NPAverage, NSNumber, NSDate, NSObject, NWTCPConnection, NSString;

@interface NPEdgeLatency : NSObject <NSSecureCoding> {

	BOOL _probeTFO;
	BOOL _probeNoTFOCookie;
	BOOL _passedReprobeThreshold;
	BOOL _needReprobe;
	BOOL _isObserving;
	unsigned long long _edgeIndex;
	NWEndpoint* _probeEndpoint;
	unsigned long long _roundTripTime;
	NPAverage* _roundTripAverage;
	NPAverage* _roundTripAverageObserved;
	NSNumber* _addressFamily;
	long long _interfaceType;
	long long _TFOStatus;
	long long _probeCount;
	NSDate* _creationDate;
	long long _reprobeCount;
	NSObject*<OS_dispatch_source> _probeTimer;
	NWTCPConnection* _probeConnection;
	/*^block*/id _probeCompletionHandler;
	NSNumber* _currentTimeout;

}

@property (assign) long long reprobeCount;                                //@synthesize reprobeCount=_reprobeCount - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> probeTimer;              //@synthesize probeTimer=_probeTimer - In the implementation block
@property (retain) NWTCPConnection * probeConnection;                     //@synthesize probeConnection=_probeConnection - In the implementation block
@property (copy) id probeCompletionHandler;                               //@synthesize probeCompletionHandler=_probeCompletionHandler - In the implementation block
@property (retain) NSNumber * currentTimeout;                             //@synthesize currentTimeout=_currentTimeout - In the implementation block
@property (assign) BOOL needReprobe;                                      //@synthesize needReprobe=_needReprobe - In the implementation block
@property (assign) BOOL isObserving;                                      //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) unsigned long long edgeIndex;                          //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (retain) NWEndpoint * probeEndpoint;                            //@synthesize probeEndpoint=_probeEndpoint - In the implementation block
@property (assign) unsigned long long roundTripTime;                      //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (retain) NPAverage * roundTripAverage;                          //@synthesize roundTripAverage=_roundTripAverage - In the implementation block
@property (retain) NPAverage * roundTripAverageObserved;                  //@synthesize roundTripAverageObserved=_roundTripAverageObserved - In the implementation block
@property (retain) NSNumber * addressFamily;                              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (assign) long long interfaceType;                               //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign) BOOL probeTFO;                                         //@synthesize probeTFO=_probeTFO - In the implementation block
@property (assign) BOOL probeNoTFOCookie;                                 //@synthesize probeNoTFOCookie=_probeNoTFOCookie - In the implementation block
@property (assign) long long TFOStatus;                                   //@synthesize TFOStatus=_TFOStatus - In the implementation block
@property (readonly) NSString * addressFamilyString; 
@property (readonly) NSString * TFOStatusString; 
@property (readonly) NSString * connectionParametersString; 
@property (readonly) BOOL isTFOEnabled; 
@property (assign) long long probeCount;                                  //@synthesize probeCount=_probeCount - In the implementation block
@property (retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) BOOL passedReprobeThreshold;                           //@synthesize passedReprobeThreshold=_passedReprobeThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProbeTFO:(BOOL)arg1 ;
-(BOOL)probeTFO;
-(long long)TFOStatus;
-(void)setNeedReprobe:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPassedReprobeThreshold:(BOOL)arg1 ;
-(long long)interfaceType;
-(BOOL)isTFOEnabled;
-(BOOL)passedReprobeThreshold;
-(void)setTFOStatus:(long long)arg1 ;
-(NWTCPConnection *)probeConnection;
-(NPAverage *)roundTripAverageObserved;
-(void)setRoundTripTime:(unsigned long long)arg1 ;
-(void)setProbeCount:(long long)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)measureLatencyWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProbeCompletionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)probeCount;
-(void)setProbeConnection:(NWTCPConnection *)arg1 ;
-(NSObject*<OS_dispatch_source>)probeTimer;
-(BOOL)isComplete:(BOOL)arg1 ;
-(void)setProbeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isObserving;
-(NSString *)connectionParametersString;
-(unsigned long long)getRoundTripSample:(unsigned long long)arg1 ;
-(NSString *)addressFamilyString;
-(unsigned long long)roundTripTime;
-(id)description;
-(NSDate *)creationDate;
-(void)setCurrentTimeout:(NSNumber *)arg1 ;
-(void)setRoundTripAverage:(NPAverage *)arg1 ;
-(void)setEdgeIndex:(unsigned long long)arg1 ;
-(void)setRoundTripAverageObserved:(NPAverage *)arg1 ;
-(NSNumber *)currentTimeout;
-(void)pingPong;
-(long long)reprobeCount;
-(void)addRoundTripSamples:(id)arg1 ;
-(void)setAddressFamily:(NSNumber *)arg1 ;
-(void)addRoundTripSample:(unsigned long long)arg1 ;
-(NSString *)TFOStatusString;
-(BOOL)fillTestLatency;
-(unsigned long long)edgeIndex;
-(id)initWithCoder:(id)arg1 ;
-(void)setReprobeCount:(long long)arg1 ;
-(NPAverage *)roundTripAverage;
-(id)initWithProbeEndpoint:(id)arg1 probeTFO:(BOOL)arg2 ;
-(void)setProbeEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)probeEndpoint;
-(NSNumber *)addressFamily;
-(void)setIsObserving:(BOOL)arg1 ;
-(id)probeCompletionHandler;
-(void)setProbeNoTFOCookie:(BOOL)arg1 ;
-(BOOL)needReprobe;
-(void)setInterfaceType:(long long)arg1 ;
-(BOOL)isMatched:(id)arg1 ;
-(void)addRoundTripSampleObserved:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isMatched:(id)arg1 parameters:(networkParameters*)arg2 ;
-(BOOL)probeNoTFOCookie;
@end

