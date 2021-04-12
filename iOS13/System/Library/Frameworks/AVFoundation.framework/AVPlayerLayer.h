/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVWeakObservable.h>

@class AVPlayerLayerInternal, AVPlayer, NSString, NSDictionary;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable> {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)keyPathsForValuesAffectingVideoRect;
+(id)makeClosedCaptionLayer;
+(void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)removeFromSuperlayer;
-(void)addSublayer:(id)arg1 ;
-(id)_videoLayer;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(void)setContentsScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)_maskLayer;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)layoutSublayers;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setPIPModeEnabled:(BOOL)arg1 ;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)videoPerformanceMetrics;
-(CGRect)videoRect;
-(BOOL)isReadyForDisplay;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(BOOL)isForScrubbingOnly;
-(void)setForScrubbingOnly:(BOOL)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(BOOL)_preventsChangesToSublayerHierarchy;
-(BOOL)isLegibleDisplayEnabled;
-(BOOL)isPIPModeEnabled;
-(id)placeholderContentLayerDuringPIPMode;
-(void)hasEnqueuedVideoFrameChanged:(id)arg1 ;
-(void)_windowSceneDidEnterBackground:(id)arg1 ;
-(void)_getMaskLayer:(id*)arg1 videoLayer:(id*)arg2 subtitleLayer:(id*)arg3 closedCaptionLayer:(id*)arg4 ;
-(CGSize)_playerCurrentItemPresentationSize;
-(BOOL)isLanczosFilterDownscalingEnabled;
-(void)_notifyPlayerOfDisplaySize;
-(id)_closedCaptionLayer;
-(void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(CGSize)arg5 forKey:(id)arg6 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4 ;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3 ;
-(void)_stopObservingPlayer:(id)arg1 ;
-(void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)arg1 ;
-(BOOL)_willManageSublayersAsSwappedLayers;
-(id)_subtitleLayer;
-(void)_updateReadyForDisplayForPlayerCurrentItem;
-(id)_associatedRemoteModeLayer;
-(long long)_activeMode;
-(void)_configurePlayerWhenLeavingPIP;
-(void)_startObservingPlayer:(id)arg1 ;
-(void)_configurePlayerWhenEnteringPIP;
-(void)_updateIsPartOfForegroundScene;
-(id)_sublayersForPIP;
-(void)_setSublayersForPIP:(id)arg1 ;
-(void)_setSublayersPreventChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)_setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)_setWillManageSublayersAsSwappedLayers:(BOOL)arg1 ;
-(void)_mergeClientLayersIntoMaskLayer:(id)arg1 ;
-(void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2 ;
-(void)stopRedirectingVideoToLayer:(id)arg1 ;
-(void)_enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)_enterSecondScreenModeRedirectingVideoToLayer:(id)arg1 ;
-(void)_leavePIPModeForLayer:(id)arg1 ;
-(void)_leaveSecondScreenModeForLayer:(id)arg1 ;
-(BOOL)_isConnectedToSecondScreen;
-(void)_associateWithLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)_setIsConnectedToSecondScreen:(BOOL)arg1 ;
-(void)_disassociateWithLayerForMode:(long long)arg1 ;
-(void)_forceLayout;
-(BOOL)_currentWindowSceneIsForeground;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(CGSize)_displaySize;
-(void)setLanczosFilterDownscalingEnabled:(BOOL)arg1 ;
-(long long)lanczosFilterDownscaleFactor;
-(void)setLanczosFilterDownscaleFactor:(long long)arg1 ;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(void)setLegibleDisplayEnabled:(BOOL)arg1 ;
-(void)startRedirectingVideoToLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)leavePIPMode;
-(void)setPlaceholderContentLayerDuringPIPMode:(id)arg1 ;
-(BOOL)_isPartOfForegroundScene;
@end

