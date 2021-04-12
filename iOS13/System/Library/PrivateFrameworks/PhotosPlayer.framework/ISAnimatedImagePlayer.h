/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class NSHashTable, ISAnimatedImage, ISAnimatedImageTimer, NSString;

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver> {

	NSHashTable* _weakDestinations;
	ISAnimatedImage* _image;
	ISAnimatedImageTimer* _timer;
	CGImageRef _currentImage;
	BOOL _hasStartedAnimating;
	BOOL _hasFinishedAnimating;
	double _timeAccumulator;
	double _previousFrameTime;
	BOOL _infiniteLoop;
	unsigned long long _remainingLoopCount;
	BOOL _playing;
	BOOL _allowFrameDrops;
	unsigned long long _displayedFrameIndex;

}

@property (nonatomic,readonly) ISAnimatedImage * animatedImage; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                       //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) unsigned long long displayedFrameIndex;              //@synthesize displayedFrameIndex=_displayedFrameIndex - In the implementation block
@property (assign,nonatomic) BOOL allowFrameDrops;                                //@synthesize allowFrameDrops=_allowFrameDrops - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGImageRef)currentImage;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(ISAnimatedImage *)animatedImage;
-(BOOL)_shouldAnimate;
-(id)initWithAnimatedImage:(id)arg1 ;
-(void)animationTimerFired:(double)arg1 ;
-(void)updateAnimation;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setAllowFrameDrops:(BOOL)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)_notifyDestinationsOfFrameChange;
-(void)_notifyDestinationsOfAnimationStart;
-(void)_notifyDestinationsOfAnimationEnd;
-(BOOL)_anyDestinationIsReady;
-(void)_seekToBeginning;
-(void)_setCurrentFrame:(CGImageRef)arg1 ;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(void)_resetAnimationState;
-(unsigned long long)displayedFrameIndex;
-(BOOL)allowFrameDrops;
@end

