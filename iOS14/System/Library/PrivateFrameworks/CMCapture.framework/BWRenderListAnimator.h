/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, BWRenderList, BWRenderListParameters, BWSpringSimulation;

@interface BWRenderListAnimator : NSObject {

	NSObject*<OS_dispatch_queue> _preparationMutexQueue;
	BOOL _preparationMutexQueuePrepared;
	BWRenderList* _interpolatingRenderList;
	BWRenderListParameters* _interpolatingParameters;
	BWSpringSimulation* _springSimulation;
	BWRenderList* _initialRenderList;
	BWRenderListParameters* _initialParameters;
	BWRenderList* _finalRenderList;
	BWRenderListParameters* _finalParameters;

}

@property (nonatomic,retain,readonly) BWRenderList * renderList;                               //@synthesize interpolatingRenderList=_interpolatingRenderList - In the implementation block
@property (nonatomic,retain,readonly) BWRenderListParameters * parameters;                     //@synthesize interpolatingParameters=_interpolatingParameters - In the implementation block
@property (nonatomic,retain,readonly) BWRenderList * initialRenderList;                        //@synthesize initialRenderList=_initialRenderList - In the implementation block
@property (nonatomic,retain,readonly) BWRenderListParameters * initialParameters;              //@synthesize initialParameters=_initialParameters - In the implementation block
@property (nonatomic,retain,readonly) BWRenderList * finalRenderList;                          //@synthesize finalRenderList=_finalRenderList - In the implementation block
@property (nonatomic,retain,readonly) BWRenderListParameters * finalParameters;                //@synthesize finalParameters=_finalParameters - In the implementation block
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
@property (getter=isCompleted,nonatomic,readonly) BOOL completed; 
+(void)initialize;
-(BWRenderListParameters *)parameters;
-(void)setPrepared:(BOOL)arg1 ;
-(BWRenderList *)renderList;
-(void)_configureSpringSimulation;
-(BOOL)_parametersContainLiveStageRendering:(BWRenderListParameterList*)arg1 ;
-(id)interpolateParameters;
-(id)initWithInitialParameters:(id)arg1 initialRenderList:(id)arg2 finalParameters:(id)arg3 finalRenderList:(id)arg4 ;
-(void)prepareWithInputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(BWRenderList *)initialRenderList;
-(BWRenderListParameters *)initialParameters;
-(BWRenderList *)finalRenderList;
-(BWRenderListParameters *)finalParameters;
-(BOOL)isPrepared;
-(BOOL)isCompleted;
-(void)dealloc;
@end

