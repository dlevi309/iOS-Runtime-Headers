/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIDragInteractionDriverDelegate <NSObject>
@required
-(BOOL)dragDriver:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2;
-(void)dragDriver:(id)arg1 beginDragWithTouches:(id)arg2 itemUpdater:(/*^block*/id)arg3 beginningSessionHandler:(/*^block*/id)arg4;
-(BOOL)dragDriverBeginLift:(id)arg1;
-(BOOL)dragDriver:(id)arg1 prepareToLiftWithCompletion:(/*^block*/id)arg2;
-(void)dragDriverCancelLift:(id)arg1;
-(BOOL)dragDriver:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)dragDriverWantsExclusionOverride:(id)arg1;
-(BOOL)dragDriver:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)dragDriver:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(void)dragDriverCancelAddItemsGesture:(id)arg1;

@end

