/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandler.h>

@class NSString;

@interface MTMediaActivityEventHandler : MTEventHandler {

	NSString* _defaultEventType;
	NSString* _defaultActionType;

}

@property (nonatomic,retain) NSString * defaultEventType;                                          //@synthesize defaultEventType=_defaultEventType - In the implementation block
@property (nonatomic,retain) NSString * defaultActionType;                                         //@synthesize defaultActionType=_defaultActionType - In the implementation block
@property (assign,nonatomic,__weak) id<MTMediaActivityEventHandlerDelegate> delegate; 
-(id)eventType;
-(id)actionType;
-(id)knownFields;
-(id)initWithMetricsKit:(id)arg1 defaultEventType:(id)arg2 defaultActionType:(id)arg3 ;
-(id)eventVersion:(id)arg1 ;
-(id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6 ;
-(void)setDefaultEventType:(NSString *)arg1 ;
-(void)setDefaultActionType:(NSString *)arg1 ;
-(NSString *)defaultEventType;
-(NSString *)defaultActionType;
@end

