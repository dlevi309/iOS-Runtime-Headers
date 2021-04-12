/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NPEdgeSelection, NSString;

@interface NPNetworkInfo : NSObject <NSSecureCoding> {

	BOOL _hasIPv6;
	BOOL _isProbeInProgress;
	NSDate* _lastVisited;
	NSDate* _lastUsed;
	long long _lastFallbackReason;
	NSArray* _edgeLatencies;
	NSArray* _currentLatencyMap;
	NSDate* _probeRateLimit;
	NPEdgeSelection* _edgeSelection;

}

@property (retain) NSArray * edgeLatencies;                             //@synthesize edgeLatencies=_edgeLatencies - In the implementation block
@property (retain) NSArray * currentLatencyMap;                         //@synthesize currentLatencyMap=_currentLatencyMap - In the implementation block
@property (retain) NSDate * probeRateLimit;                             //@synthesize probeRateLimit=_probeRateLimit - In the implementation block
@property (retain) NPEdgeSelection * edgeSelection;                     //@synthesize edgeSelection=_edgeSelection - In the implementation block
@property (assign) BOOL isProbeInProgress;                              //@synthesize isProbeInProgress=_isProbeInProgress - In the implementation block
@property (nonatomic,retain) NSDate * lastVisited;                      //@synthesize lastVisited=_lastVisited - In the implementation block
@property (nonatomic,retain) NSDate * lastUsed;                         //@synthesize lastUsed=_lastUsed - In the implementation block
@property (nonatomic,readonly) NSString * lastVisitedDesc; 
@property (nonatomic,readonly) NSString * lastUsedDesc; 
@property (assign) long long lastFallbackReason;                        //@synthesize lastFallbackReason=_lastFallbackReason - In the implementation block
@property (assign) BOOL hasIPv6;                                        //@synthesize hasIPv6=_hasIPv6 - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)failureReasonToFallbackReason:(unsigned)arg1 ;
-(void)setLastFallbackReason:(long long)arg1 ;
-(BOOL)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(networkParameters*)arg3 requireUniqueEdges:(BOOL)arg4 ;
-(void)setLastUsed:(NSDate *)arg1 ;
-(NSString *)lastUsedDesc;
-(void)setHasIPv6:(BOOL)arg1 ;
-(void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(networkParameters*)arg3 ;
-(long long)compareLastVisited:(id)arg1 ;
-(void)setEdgeSelection:(NPEdgeSelection *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)edgeLatencies;
-(void)setEdgeLatencies:(NSArray *)arg1 ;
-(void)setProbeRateLimit:(NSDate *)arg1 ;
-(NSDate *)lastUsed;
-(long long)lastFallbackReason;
-(void)setCurrentLatencyMap:(NSArray *)arg1 ;
-(NSArray *)currentLatencyMap;
-(BOOL)isProbeInProgress;
-(NPEdgeSelection *)edgeSelection;
-(void)setLastVisited:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)mergeNewLatencies:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)resortEdgeLatenciesUsingComparator:(/*^block*/id)arg1 ;
-(void)handleTFOFailedForAddressFamily:(unsigned char)arg1 ;
-(NSDate *)probeRateLimit;
-(BOOL)hasIPv6;
-(void)setIsProbeInProgress:(BOOL)arg1 ;
-(NSDate *)lastVisited;
-(NSString *)lastVisitedDesc;
@end

