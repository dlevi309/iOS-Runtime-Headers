/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


#import <TimeSync/TimeSync-Structs.h>
@interface TSTimeLineFilter : NSObject

@property (nonatomic,readonly) SCD_Struct_TS0 rateRatio; 
@property (nonatomic,readonly) BOOL canConvertTime; 
-(void)resetFilter;
-(void)addTimestamps:(SCD_Struct_TS0)arg1 ;
-(SCD_Struct_TS0)rateRatio;
-(void)getAnchors:(SCD_Struct_TS0*)arg1 andRateRatio:(SCD_Struct_TS0*)arg2 ;
-(unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1 ;
-(unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1 ;
-(unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1 ;
-(unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1 ;
-(BOOL)canConvertTime;
@end

