/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSQueryPerformerProtocol <NSObject>
@property (nonatomic,readonly) BOOL isCancelled; 
@property (assign,nonatomic) SCD_Struct_CL1 statistics; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection; 
@required
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
+(double)defaultPrecision;
+(unsigned long long)numberOfRegionsPerBatch;
-(double)precision;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setPrecision:(double)arg1;
-(void)submitWithHandler:(/*^block*/id)arg1;
-(unsigned long long)cacheItems:(id)arg1;
-(SCD_Struct_CL1)statistics;
-(void)logGeoLookupFailureResult;
-(id)regions;
-(void)setStatistics:(SCD_Struct_CL1)arg1;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
-(void)cancel;
-(void)setLoggingConnection:(id)arg1;
-(BOOL)isCancelled;

@end

