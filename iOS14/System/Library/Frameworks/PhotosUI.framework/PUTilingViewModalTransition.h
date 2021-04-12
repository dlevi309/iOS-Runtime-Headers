/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUModalTransition.h>
#import <libobjc.A.dylib/PUTilingViewControllerTransition.h>

@class PUTilingViewTransitionHelper, NSString;

@interface PUTilingViewModalTransition : PUModalTransition <PUTilingViewControllerTransition> {

	PUTilingViewTransitionHelper* __tilingViewTransitionHelper;

}

@property (nonatomic,readonly) PUTilingViewTransitionHelper * _tilingViewTransitionHelper;              //@synthesize _tilingViewTransitionHelper=__tilingViewTransitionHelper - In the implementation block
@property (nonatomic,readonly) BOOL hasStarted; 
@property (getter=isTransitionPaused,nonatomic,readonly) BOOL transitionPaused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resumeTransition:(BOOL)arg1 ;
-(id)init;
-(void)_animateTransitionWithOperation:(long long)arg1 ;
-(void)pauseTransition;
-(BOOL)isInteractive;
-(void)animatePresentTransition;
-(BOOL)hasStarted;
-(void)animateDismissTransition;
-(void)pauseTransitionWithOptions:(unsigned long long)arg1 ;
-(PUTilingViewTransitionHelper *)_tilingViewTransitionHelper;
-(void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2 ;
-(BOOL)isTransitionPaused;
@end

