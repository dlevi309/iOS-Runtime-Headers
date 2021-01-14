/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFCore/AVKeyPathDependencyHost.h>
#import <AVFCore/AVWeakObservable.h>

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
+(void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2 ;
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)keyPathsForValuesAffectingVideoRect;
+(id)makeClosedCaptionLayer;
-(void)removeAllAnimations;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)removeFromSuperlayer;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addSublayer:(id)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSString *)videoGravity;
-(id)init;
-(NSDictionary *)pixelBufferAttributes;
-(id)_maskLayer;
-(void)setSublayers:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg1 ;
-(id)_videoLayer;
-(BOOL)isReadyForDisplay;
-(BOOL)isForScrubbingOnly;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setForScrubbingOnly:(BOOL)arg1 ;
-(BOOL)isPIPModeEnabled;
-(id)_subtitleLayer;
-(BOOL)isLegibleDisplayEnabled;
-(id)placeholderContentLayerDuringPIPMode;
-(NSEdgeInsets)legibleContentInsets;
-(void)hasEnqueuedVideoFrameChanged:(id)arg1 ;
-(void)_windowSceneDidEnterBackground:(id)arg1 ;
-(id)_sublayersForPIP;
-(void)_windowSceneWillEnterForeground:(id)arg1 ;
-(void)_getMaskLayer:(id*)arg1 videoLayer:(id*)arg2 subtitleLayer:(id*)arg3 closedCaptionLayer:(id*)arg4 ;
-(CGSize)_playerCurrentItemPresentationSize;
-(BOOL)isLanczosFilterDownscalingEnabled;
-(void)_notifyPlayerOfDisplaySize;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(id)_closedCaptionLayer;
-(void)_stopObservingPlayer:(id)arg1 ;
-(void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(CGSize)arg5 forKey:(id)arg6 ;
-(void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_setPlayer:(id)arg1 forPIP:(BOOL)arg2 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4 ;
-(long long)_activeMode;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3 ;
-(void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)arg1 ;
-(BOOL)_willManageSublayersAsSwappedLayers;
-(void)_updateReadyForDisplayForPlayerCurrentItem;
-(id)_associatedRemoteModeLayer;
-(void)_startObservingPlayer:(id)arg1 ;
-(void)_configurePlayerWhenLeavingPIP;
-(void)_configurePlayerWhenEnteringPIP;
-(void)_updateIsPartOfForegroundScene;
-(void)_forceLayout;
-(void)_setSublayersForPIP:(id)arg1 ;
-(void)setPIPModeEnabled:(BOOL)arg1 ;
-(void)_setSublayersPreventChangesToSublayerHierarchy:(BOOL)arg1 ;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(void)_setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)_setWillManageSublayersAsSwappedLayers:(BOOL)arg1 ;
-(void)_mergeClientLayersIntoMaskLayer:(id)arg1 ;
-(void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2 ;
-(void)stopRedirectingVideoToLayer:(id)arg1 ;
-(void)_enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)_enterSecondScreenModeRedirectingVideoToLayer:(id)arg1 ;
-(void)leavePIPMode;
-(void)_leavePIPModeForLayer:(id)arg1 ;
-(void)_leaveSecondScreenModeForLayer:(id)arg1 ;
-(BOOL)_isConnectedToSecondScreen;
-(void)_associateWithLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)_setIsConnectedToSecondScreen:(BOOL)arg1 ;
-(void)_disassociateWithLayerForMode:(long long)arg1 ;
-(BOOL)_preventsChangesToSublayerHierarchy;
-(void)_setIsPartOfForegroundScene:(BOOL)arg1 ;
-(BOOL)_currentWindowSceneIsForeground;
-(BOOL)_isPartOfForegroundScene;
-(void)_notifyPlayerOfLayerForegroundStateChange;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(id)videoPerformanceMetrics;
-(void)setLanczosFilterDownscalingEnabled:(BOOL)arg1 ;
-(long long)lanczosFilterDownscaleFactor;
-(void)setLanczosFilterDownscaleFactor:(long long)arg1 ;
-(void)setLegibleContentInsets:(NSEdgeInsets)arg1 ;
-(void)setLegibleDisplayEnabled:(BOOL)arg1 ;
-(void)startRedirectingVideoToLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)setPlaceholderContentLayerDuringPIPMode:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(CGRect)videoRect;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(CGSize)_displaySize;
-(void)dealloc;
@end

