/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTPerfBaseMeasurement.h>
#import <libobjc.A.dylib/MTLoadUrlMeasurementData.h>

@class NSArray, NSString;

@interface MTLoadUrlMeasurement : MTPerfBaseMeasurement <MTLoadUrlMeasurementData>

@property (nonatomic,copy,readonly) NSArray * eventData; 
@property (nonatomic,copy,readonly) NSArray * additionalFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEdgeNodeCacheStatus:(id)arg1 ;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(void)setConnectionReused:(BOOL)arg1 ;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(void)setXpSamplingForced:(BOOL)arg1 ;
-(void)setXpSessionDuration:(unsigned long long)arg1 ;
-(void)mark:(id)arg1 ;
-(void)setXpSamplingPercentageUsers:(double)arg1 ;
-(void)setResolvedIPAddress:(id)arg1 ;
-(void)mark:(id)arg1 time:(long long)arg2 ;
-(void)setRequestUrl:(id)arg1 ;
-(void)setDnsServersIPAddresses:(id)arg1 ;
-(void)mark:(id)arg1 date:(id)arg2 ;
@end

