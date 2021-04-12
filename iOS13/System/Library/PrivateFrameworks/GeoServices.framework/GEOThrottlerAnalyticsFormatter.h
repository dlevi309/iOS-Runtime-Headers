/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject {

	NSMutableDictionary* _throttlerAggregatedInfo;

}
+(id)sharedThrottlerFormatter;
-(id)init;
-(int)networkServiceForRequestKind:(SCD_Struct_GE94)arg1 ;
-(BOOL)hasInitialInfoForKeyPath:(id)arg1 ;
-(BOOL)hasThrottledInfoForKeyPath:(id)arg1 ;
-(void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3 ;
-(void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(SCD_Struct_GE94)arg3 appId:(id)arg4 ;
-(void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2 ;
-(int)throttleModeForString:(id)arg1 ;
-(int)throttleTypeForString:(id)arg1 ;
@end

