/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)animationCompletions;
-(CGPoint)cameraPosition;
-(void)_translateAppForZoomFraction:(double)arg1 ;
-(double)_appZoomDelay;
-(SBReversibleLayerPropertyAnimator *)appZoomAnimator;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_prepareAnimation;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(void)_delayedForRotation;
-(double)_iconZoomDelay;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)hintToFraction:(double)arg1 ;
-(void)setAppZoomAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(void)setAnimationCompletions:(NSMutableArray *)arg1 ;
-(double)distantScale;
-(double)_appZPositionForZoomFraction:(double)arg1 ;
-(void)_fadeAppForZoomFraction:(double)arg1 ;
-(id)initWithFolderController:(id)arg1 appView:(id)arg2 ;
-(void)_cleanupAnimation;
-(void)_zoomAppForZoomFraction:(double)arg1 ;
-(void)setDistantScale:(double)arg1 ;
@end

