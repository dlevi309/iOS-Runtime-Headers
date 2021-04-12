/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSQueryProtocol.h>

@protocol GEOMapServiceSpatialEventLookupTicket, OS_dispatch_queue;
@class NSArray, NSDictionary, NSObject, NSString;

@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol> {

	BOOL _isCancelled;
	NSArray* _timeLocationTuples;
	double _radius;
	NSDictionary* _parametersByTimeLocationTupleIdentifier;
	id<GEOMapServiceSpatialEventLookupTicket> _ticket;
	NSDictionary* _resolvedPublicEventsForTimeLocationTuples;
	NSDictionary* _invalidationTokens;
	NSObject*<OS_dispatch_queue> _geoQueue;

}

@property (nonatomic,readonly) NSArray * timeLocationTuples;                                        //@synthesize timeLocationTuples=_timeLocationTuples - In the implementation block
@property (nonatomic,readonly) double radius;                                                       //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                                    //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) NSDictionary * parametersByTimeLocationTupleIdentifier;              //@synthesize parametersByTimeLocationTupleIdentifier=_parametersByTimeLocationTupleIdentifier - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceSpatialEventLookupTicket> ticket;                    //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> geoQueue;                               //@synthesize geoQueue=_geoQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * resolvedPublicEventsForTimeLocationTuples;              //@synthesize resolvedPublicEventsForTimeLocationTuples=_resolvedPublicEventsForTimeLocationTuples - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidationTokens;                                     //@synthesize invalidationTokens=_invalidationTokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maximumBatchSize;
-(void)cancel;
-(BOOL)isCancelled;
-(double)radius;
-(id<GEOMapServiceSpatialEventLookupTicket>)ticket;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(void)prepareForRetry;
-(id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2 ;
-(id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2 ;
-(id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 ;
-(NSArray *)timeLocationTuples;
-(NSDictionary *)parametersByTimeLocationTupleIdentifier;
-(NSDictionary *)resolvedPublicEventsForTimeLocationTuples;
-(void)setResolvedPublicEventsForTimeLocationTuples:(NSDictionary *)arg1 ;
-(NSDictionary *)invalidationTokens;
-(void)setInvalidationTokens:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)geoQueue;
@end

