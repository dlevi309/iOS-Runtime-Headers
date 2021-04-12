/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

@class UIView, SBReversibleLayerPropertyAnimator, NSMutableArray, SBHCenterAppZoomSettings;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {

	UIView* _appView;
	UIView* _appZoomView;
	CGRect _destinationFrame;
	unsigned char _testCompletionCount;
	double _distantScale;
	SBReversibleLayerPropertyAnimator* _appZoomAnimator;
	NSMutableArray* _animationCompletions;

}

@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * appZoomAnimator;              //@synthesize appZoomAnimator=_appZoomAnimator - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationCompletions;                            //@synthesize animationCompletions=_animationCompletions - In the implementation block
@property (nonatomic,retain) SBHCenterAppZoomSettings * settings; 
@property (assign) double distantScale;                                                        //@synthesize distantScale=_distantScale - In the implementation block
-(CGPoint)cameraPosition;
-(void)_delayedForRotation;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(NSMutableArray *)animationCompletions;
-(void)hintToFraction:(double)arg1 ;
-(void)setAnimationCompletions:(NSMutableArray *)arg1 ;
-(double)_iconZoomDelay;
-(id)initWithFolderController:(id)arg1 appView:(id)arg2 ;
-(void)setDistantScale:(double)arg1 ;
-(void)_zoomAppForZoomFraction:(double)arg1 ;
-(void)_translateAppForZoomFraction:(double)arg1 ;
-(void)_fadeAppForZoomFraction:(double)arg1 ;
-(void)setAppZoomAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(double)_appZoomDelay;
-(SBReversibleLayerPropertyAnimator *)appZoomAnimator;
-(double)_appZPositionForZoomFraction:(double)arg1 ;
-(double)distantScale;
@end

