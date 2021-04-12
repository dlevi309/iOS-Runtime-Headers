/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isCancelled;                                                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL2 statistics;                                                      //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) double precision;                                                               //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;                                         //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)categories;
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2 ;
+(double)defaultPrecision;
+(unsigned long long)numberOfRegionsPerBatch;
-(double)precision;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setPrecision:(double)arg1 ;
-(CLSBusinessCategoryCache *)cache;
-(id)init;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)cacheItems:(id)arg1 ;
-(SCD_Struct_CL2)statistics;
-(void)logGeoLookupFailureResult;
-(NSArray *)regions;
-(void)setStatistics:(SCD_Struct_CL2)arg1 ;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1 ;
-(void)cancel;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)isCancelled;
-(id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3 ;
-(NSArray *)locationGeoParameters;
-(id<GEOMapServiceBatchSpatialLookupTicket>)businessGenericTicket;
@end

