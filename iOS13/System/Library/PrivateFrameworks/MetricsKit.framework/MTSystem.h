/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventFilter;
@class MTEnvironment, MTEventRecorder;

@interface MTSystem : MTObject {

	MTEnvironment* _environment;
	MTEventRecorder* _eventRecorder;
	id<MTEventFilter> _eventFilter;

}

@property (nonatomic,retain) MTEnvironment * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) MTEventRecorder * eventRecorder;              //@synthesize eventRecorder=_eventRecorder - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> eventFilter;                //@synthesize eventFilter=_eventFilter - In the implementation block
-(MTEnvironment *)environment;
-(void)setEnvironment:(MTEnvironment *)arg1 ;
-(MTEventRecorder *)eventRecorder;
-(id<MTEventFilter>)eventFilter;
-(void)setEventFilter:(id<MTEventFilter>)arg1 ;
-(id)initWithMetricsKit:(id)arg1 ;
-(void)setEventRecorder:(MTEventRecorder *)arg1 ;
-(void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
@end

