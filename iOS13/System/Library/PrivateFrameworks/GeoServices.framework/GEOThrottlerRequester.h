/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOThrottlerRequester : NSObject
+(id)sharedRequester;
-(id)getTokenOrInfoFor:(SCD_Struct_GE94)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
-(BOOL)allowRequest:(SCD_Struct_GE94)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(BOOL)_getTokenAndInfo:(id*)arg1 forRequest:(SCD_Struct_GE94)arg2 nextSafeRequestTime:(double*)arg3 availableRequestCount:(unsigned*)arg4 error:(id*)arg5 ;
-(BOOL)getThrottleStateFor:(SCD_Struct_GE94)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
@end

