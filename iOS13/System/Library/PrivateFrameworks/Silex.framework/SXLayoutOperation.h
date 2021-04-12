/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/SXLayouterDelegate.h>

@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory, SXDOMObjectProviding;
@class SXLayoutBlueprint, SXColumnLayouter, SXLayoutTask, NSString;

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate> {

	BOOL _executing;
	BOOL _finished;
	SXLayoutBlueprint* _layoutBlueprint;
	/*^block*/id _beforeBlock;
	/*^block*/id _afterBlock;
	double _duration;
	id<SXComponentSizerEngine> _componentSizerEngine;
	id<SXLayoutBlueprintFactory> _layoutBlueprintFactory;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	SXColumnLayouter* _layouter;
	SXLayoutTask* _task;
	double _startTime;

}

@property (nonatomic,readonly) id<SXComponentSizerEngine> componentSizerEngine;                  //@synthesize componentSizerEngine=_componentSizerEngine - In the implementation block
@property (nonatomic,readonly) id<SXLayoutBlueprintFactory> layoutBlueprintFactory;              //@synthesize layoutBlueprintFactory=_layoutBlueprintFactory - In the implementation block
@property (assign) BOOL executing;                                                               //@synthesize executing=_executing - In the implementation block
@property (assign) BOOL finished;                                                                //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                       //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXColumnLayouter * layouter;                                      //@synthesize layouter=_layouter - In the implementation block
@property (nonatomic,readonly) SXLayoutTask * task;                                              //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) double startTime;                                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) SXLayoutBlueprint * layoutBlueprint;                              //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
@property (setter=beforeLayout:,nonatomic,copy) id beforeBlock;                                  //@synthesize beforeBlock=_beforeBlock - In the implementation block
@property (setter=afterLayout:,nonatomic,copy) id afterBlock;                                    //@synthesize afterBlock=_afterBlock - In the implementation block
@property (nonatomic,readonly) double duration;                                                  //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(double)duration;
-(SXLayoutTask *)task;
-(double)startTime;
-(void)setExecuting:(BOOL)arg1 ;
-(BOOL)executing;
-(id)afterBlock;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(SXLayoutBlueprint *)layoutBlueprint;
-(void)layouter:(id)arg1 didFinishLayoutForComponentBlueprint:(id)arg2 layoutBlueprint:(id)arg3 shouldContinueLayout:(BOOL*)arg4 ;
-(void)beforeLayout:(/*^block*/id)arg1 ;
-(void)afterLayout:(/*^block*/id)arg1 ;
-(SXColumnLayouter *)layouter;
-(void)startBookKeeping;
-(void)prepareLayoutBlueprint:(id)arg1 ;
-(id)beforeBlock;
-(id)layoutWithBlueprint:(id)arg1 ;
-(BOOL)layoutBlueprint:(id)arg1 containsComponents:(id)arg2 ;
-(void)finishBookKeeping;
-(void)updateLayoutBlueprint:(id)arg1 components:(id)arg2 ;
-(id)createLayoutBlueprintForComponents:(id)arg1 ;
-(void)registerComponent:(id)arg1 layoutBlueprint:(id)arg2 componentIndex:(unsigned long long)arg3 ;
-(id<SXLayoutBlueprintFactory>)layoutBlueprintFactory;
-(id<SXComponentSizerEngine>)componentSizerEngine;
-(id)initWithTask:(id)arg1 layouter:(id)arg2 DOMObjectProvider:(id)arg3 componentSizerEngine:(id)arg4 layoutBlueprintFactory:(id)arg5 ;
@end

