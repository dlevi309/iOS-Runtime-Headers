/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


#import <TimeSync/TimeSync-Structs.h>
@interface TSTimeLineFilter : NSObject

@property (nonatomic,readonly) SCD_Struct_TS0 rateRatio; 
@property (nonatomic,readonly) BOOL canConvertTime; 
-(void)addTimestamps:(SCD_Struct_TS0)arg1 ;
-(SCD_Struct_TS0)rateRatio;
-(unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1 ;
-(unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1 ;
-(unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1 ;
-(unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1 ;
-(void)resetFilter;
-(BOOL)canConvertTime;
@end

