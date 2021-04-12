/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)geoQueue;
-(double)radius;
-(id<GEOMapServiceSpatialEventLookupTicket>)ticket;
-(void)cancel;
-(BOOL)isCancelled;
-(NSDictionary *)invalidationTokens;
-(NSDictionary *)resolvedPublicEventsForTimeLocationTuples;
-(id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2 ;
-(void)prepareForRetry;
-(id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2 ;
-(id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 ;
-(NSArray *)timeLocationTuples;
-(NSDictionary *)parametersByTimeLocationTupleIdentifier;
-(void)setResolvedPublicEventsForTimeLocationTuples:(NSDictionary *)arg1 ;
-(void)setInvalidationTokens:(NSDictionary *)arg1 ;
@end

