/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventFilter;
@class MTEnvironment, MTEventRecorder;

@interface MTSystem : MTObject {

	MTEnvironment* _environment;
	MTEventRecorder* _eventRecorder;
	id<MTEventFilter> _eventFilter;
	id<MTEventFilter> _treatmentFilter;

}

@property (nonatomic,retain) MTEnvironment * environment;                    //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) MTEventRecorder * eventRecorder;                //@synthesize eventRecorder=_eventRecorder - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> eventFilter;                  //@synthesize eventFilter=_eventFilter - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> treatmentFilter;              //@synthesize treatmentFilter=_treatmentFilter - In the implementation block
-(id<MTEventFilter>)eventFilter;
-(void)setEventFilter:(id<MTEventFilter>)arg1 ;
-(void)setEnvironment:(MTEnvironment *)arg1 ;
-(MTEnvironment *)environment;
-(MTEventRecorder *)eventRecorder;
-(id)initWithMetricsKit:(id)arg1 ;
-(id<MTEventFilter>)treatmentFilter;
-(void)setEventRecorder:(MTEventRecorder *)arg1 ;
-(void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
-(void)setTreatmentFilter:(id<MTEventFilter>)arg1 ;
@end

