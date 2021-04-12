/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface UsageAnalytics : ObjectAnalytics
-(id)init;
-(id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 fromDate:(id)arg3 untilDate:(id)arg4 ;
-(id)lastHappenedWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 fromDate:(id)arg2 untilDate:(id)arg3 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 ;
-(id)lastHappenedWithTag:(unsigned)arg1 ;
@end

