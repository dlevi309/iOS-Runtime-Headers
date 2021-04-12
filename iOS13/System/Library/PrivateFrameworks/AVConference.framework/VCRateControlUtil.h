/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCRateControlUtil : NSObject
+(BOOL)prepareOWRDList:(SCD_Struct_VC46*)arg1 owrd:(double)arg2 time:(double)arg3 config:(VCRateControlAlgorithmConfig*)arg4 ;
+(void)calculateNOWRDWithOWRDList:(SCD_Struct_VC46*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 isInitialRampUp:(BOOL)arg3 ;
+(void)calculateNOWRDShortWithOWRDList:(SCD_Struct_VC46*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 isInitialRampUp:(BOOL)arg3 ;
+(void)calculateNOWRDAccWithOWRDList:(SCD_Struct_VC46*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 ;
+(double)calculateNOWRDWithDuration:(double)arg1 owrdList:(SCD_Struct_VC46*)arg2 historySize:(unsigned)arg3 minHistorySize:(unsigned)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(BOOL)arg6 ;
+(BOOL)calculateCongestionMetricsFromOWRDList:(SCD_Struct_VC46*)arg1 owrd:(double)arg2 time:(double)arg3 config:(VCRateControlAlgorithmConfig*)arg4 isInitialRampUp:(BOOL)arg5 ;
@end

