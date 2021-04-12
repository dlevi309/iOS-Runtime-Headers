/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBScaleIconZoomAnimator.h>

@class UIView, SBHCrossfadeZoomSettings;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {

	UIView* _crossfadeView;
	BOOL _performsTrueCrossfade;
	BOOL _masksCorners;

}

@property (nonatomic,retain) SBHCrossfadeZoomSettings * settings; 
@property (assign,nonatomic) BOOL performsTrueCrossfade;                       //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) BOOL masksCorners;                                //@synthesize masksCorners=_masksCorners - In the implementation block
-(void)_assertCrossfadeViewSizeIfNecessary;
-(void)_delayedForRotation;
-(void)_prepareAnimation;
-(CGPoint)_zoomedIconCenter;
-(CGRect)_zoomedFrame;
-(BOOL)performsTrueCrossfade;
-(void)_setAnimationFraction:(double)arg1 ;
-(double)_appSnapshotCornerRadiusForFraction:(double)arg1 ;
-(void)_cleanupZoom;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3 ;
-(double)maxHomeScreenZoomScale;
-(BOOL)fadesHomeScreen;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(BOOL)masksCorners;
-(void)setMasksCorners:(BOOL)arg1 ;
@end

