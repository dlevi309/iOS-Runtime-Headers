/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandler.h>

@interface MTMediaActivityEventHandler : MTEventHandler

@property (assign,nonatomic,__weak) id<MTMediaActivityEventHandlerDelegate> delegate; 
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(void)didCreateMetricsData:(id)arg1 ;
-(id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6 ;
@end

