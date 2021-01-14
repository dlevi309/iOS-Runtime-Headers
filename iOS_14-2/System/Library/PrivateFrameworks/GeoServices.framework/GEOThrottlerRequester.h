/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOThrottlerRequester : NSObject
+(id)sharedRequester;
-(BOOL)getThrottleStateFor:(SCD_Struct_GE91)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
-(BOOL)allowRequest:(SCD_Struct_GE91)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(id)getTokenOrInfoFor:(SCD_Struct_GE91)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
-(BOOL)_getTokenAndInfo:(id*)arg1 forRequest:(SCD_Struct_GE91)arg2 nextSafeRequestTime:(double*)arg3 availableRequestCount:(unsigned*)arg4 error:(id*)arg5 ;
@end

