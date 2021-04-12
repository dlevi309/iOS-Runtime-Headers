/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <VisionKit/DCAnalyticsReporterBase.h>

@interface DCUsageAnalyticsReporter : DCAnalyticsReporterBase
+(id)sharedReporter;
+(void)clearSharedCollector;
-(void)incrementCountForKey:(id)arg1 withSignature:(id)arg2 ;
-(void)incrementCountForKey:(id)arg1 ;
-(void)logDocCamFilterUsageForFilterType:(short)arg1 ;
@end

