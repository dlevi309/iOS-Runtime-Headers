/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSQueryPerformerProtocol.h>

@protocol GEOMapServiceBatchSpatialLookupTicket, OS_os_log;
@class NSArray, NSObject, CLSBusinessCategoryCache, NSString;

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol> {

	BOOL _isCancelled;
	NSArray* _locationGeoParameters;
	id<GEOMapServiceBatchSpatialLookupTicket> _businessGenericTicket;
	NSArray* _regions;
	double _precision;
	NSObject*<OS_os_log> _loggingConnection;
	SCD_Struct_CL2 _statistics;

}

@property (nonatomic,readonly) NSArray * locationGeoParameters;                                              //@synthesize locationGeoParameters=_locationGeoParameters - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceBatchSpatialLookupTicket> businessGenericTicket;              //@synthesize businessGenericTicket=_businessGenericTicket - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                                                       //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) CLSBusinessCategoryCache * cache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                                                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL2 statistics;                                                      //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) double precision;                                                               //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;                                         //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(id)categories;
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2 ;
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(CLSBusinessCategoryCache *)cache;
-(SCD_Struct_CL2)statistics;
-(void)setStatistics:(SCD_Struct_CL2)arg1 ;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(NSArray *)regions;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
-(unsigned long long)cacheItems:(id)arg1 ;
-(void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(id)arg1 ;
-(void)logAggdGeoLookupFailureResult;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3 ;
-(NSArray *)locationGeoParameters;
-(id<GEOMapServiceBatchSpatialLookupTicket>)businessGenericTicket;
@end

