/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDContainerRep <TSDLayerProviderRep>
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@optional
-(id)viewControllerForView:(id)arg1;
-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1;
-(void)willBeginEditingContainedRep;
-(void)willEndEditingContainedRep;
-(id)childRepsForHitTesting;
-(BOOL)containerManagesChildView;
-(void)addAdditionalChildBackgroundLayersToArray:(id)arg1;
-(void)addChildViewsToArray:(id)arg1;
-(void)addAlternateLayersForChildViewsToArray:(id)arg1;
-(void)willAddChildView:(id)arg1 toView:(id)arg2;
-(void)didAddChildView:(id)arg1;
-(void)willRemoveChildView:(id)arg1;
-(BOOL)canHandleGesture:(id)arg1 forChildRep:(id)arg2;
-(BOOL)allowSublayerUpdatesWhenPaused;
-(int)positionForChildView:(id)arg1;
-(int)positionForChildViewAlternateLayer:(id)arg1;

@required
-(id)childReps;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(BOOL)canSelectChildRep:(id)arg1;
-(void)selectChildRep:(id)arg1;

@end

