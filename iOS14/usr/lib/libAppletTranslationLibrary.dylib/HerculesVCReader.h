/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface HerculesVCReader : NSObject
+(id)getCurrentTransitSummary:(id)arg1 withError:(id*)arg2 ;
+(id)getBalanceForPass:(unsigned long long)arg1 withRiderClass:(unsigned char)arg2 withTransitSummary:(id)arg3 withRTAData:(id)arg4 forCity:(id)arg5 withError:(id*)arg6 ;
+(id)readBalancesFromVC:(id)arg1 forCity:(id)arg2 withError:(id*)arg3 ;
@end

