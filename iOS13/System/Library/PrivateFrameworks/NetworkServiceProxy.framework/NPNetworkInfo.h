/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (retain) NSArray * edgeLatencies;                      //@synthesize edgeLatencies=_edgeLatencies - In the implementation block
@property (retain) NSArray * currentLatencyMap;                  //@synthesize currentLatencyMap=_currentLatencyMap - In the implementation block
@property (retain) NSDate * probeRateLimit;                      //@synthesize probeRateLimit=_probeRateLimit - In the implementation block
@property (retain) NPEdgeSelection * edgeSelection;              //@synthesize edgeSelection=_edgeSelection - In the implementation block
@property (assign) BOOL isProbeInProgress;                       //@synthesize isProbeInProgress=_isProbeInProgress - In the implementation block
@property (retain) NSDate * lastVisited;                         //@synthesize lastVisited=_lastVisited - In the implementation block
@property (retain) NSDate * lastUsed;                            //@synthesize lastUsed=_lastUsed - In the implementation block
@property (readonly) NSString * lastVisitedDesc; 
@property (readonly) NSString * lastUsedDesc; 
@property (assign) long long lastFallbackReason;                 //@synthesize lastFallbackReason=_lastFallbackReason - In the implementation block
@property (assign) BOOL hasIPv6;                                 //@synthesize hasIPv6=_hasIPv6 - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)failureReasonToFallbackReason:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastVisited;
-(NSDate *)lastUsed;
-(NPEdgeSelection *)edgeSelection;
-(NSArray *)edgeLatencies;
-(NSDate *)probeRateLimit;
-(long long)lastFallbackReason;
-(BOOL)isProbeInProgress;
-(NSArray *)currentLatencyMap;
-(void)setEdgeLatencies:(NSArray *)arg1 ;
-(BOOL)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(networkParameters*)arg3 requireUniqueEdges:(BOOL)arg4 ;
-(void)setCurrentLatencyMap:(NSArray *)arg1 ;
-(long long)compareLastVisited:(id)arg1 ;
-(NSString *)lastVisitedDesc;
-(NSString *)lastUsedDesc;
-(void)resortEdgeLatenciesUsingComparator:(/*^block*/id)arg1 ;
-(void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(networkParameters*)arg3 ;
-(void)mergeNewLatencies:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)handleTFOFailedForAddressFamily:(unsigned char)arg1 ;
-(void)setLastVisited:(NSDate *)arg1 ;
-(void)setLastUsed:(NSDate *)arg1 ;
-(void)setLastFallbackReason:(long long)arg1 ;
-(BOOL)hasIPv6;
-(void)setHasIPv6:(BOOL)arg1 ;
-(void)setProbeRateLimit:(NSDate *)arg1 ;
-(void)setEdgeSelection:(NPEdgeSelection *)arg1 ;
-(void)setIsProbeInProgress:(BOOL)arg1 ;
@end

