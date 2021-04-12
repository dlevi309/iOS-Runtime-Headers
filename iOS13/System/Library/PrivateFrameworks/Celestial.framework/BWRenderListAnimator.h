/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(BWRenderListParameters *)parameters;
-(BOOL)isPrepared;
-(BOOL)isCompleted;
-(id)interpolateParameters;
-(BWRenderList *)finalRenderList;
-(BWRenderList *)renderList;
-(id)initWithInitialParameters:(id)arg1 initialRenderList:(id)arg2 finalParameters:(id)arg3 finalRenderList:(id)arg4 ;
-(void)prepareWithInputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(void)setPrepared:(BOOL)arg1 ;
-(void)_configureSpringSimulation;
-(BOOL)_parametersContainLiveStageRendering:(BWRenderListParameterList*)arg1 ;
-(BWRenderList *)initialRenderList;
-(BWRenderListParameters *)initialParameters;
-(BWRenderListParameters *)finalParameters;
@end

