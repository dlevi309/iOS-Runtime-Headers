/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSString, NSMutableArray, PUTilingView, PUTileLayoutInfo;

@interface PUTileController : NSObject {

	BOOL _active;
	BOOL _detached;
	BOOL _shouldPreserveCurrentContent;
	BOOL _reusable;
	BOOL _wantsVisibleRectChanges;
	NSString* _reuseIdentifier;
	NSMutableArray* _reasonsToSuppressAnimatedUpdates;
	long long _animationCount;
	PUTilingView* _tilingView;
	PUTileLayoutInfo* _layoutInfo;

}

@property (nonatomic,retain) NSMutableArray * reasonsToSuppressAnimatedUpdates;              //@synthesize reasonsToSuppressAnimatedUpdates=_reasonsToSuppressAnimatedUpdates - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,getter=isDetached,nonatomic) BOOL detached;                                //@synthesize detached=_detached - In the implementation block
@property (assign,getter=isReusable,nonatomic) BOOL reusable;                                //@synthesize reusable=_reusable - In the implementation block
@property (assign,nonatomic) long long animationCount;                                       //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) BOOL isAnimating; 
@property (nonatomic,__weak,readonly) PUTilingView * tilingView;                             //@synthesize tilingView=_tilingView - In the implementation block
@property (nonatomic,readonly) PUTileLayoutInfo * layoutInfo;                                //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) BOOL wantsVisibleRectChanges;                                 //@synthesize wantsVisibleRectChanges=_wantsVisibleRectChanges - In the implementation block
@property (nonatomic,readonly) BOOL isPresentationActive; 
@property (nonatomic,readonly) NSString * reuseIdentifier;                                   //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (nonatomic,readonly) PUTileLayoutInfo * presentationLayoutInfo; 
@property (assign,nonatomic) BOOL shouldPreserveCurrentContent;                              //@synthesize shouldPreserveCurrentContent=_shouldPreserveCurrentContent - In the implementation block
@property (nonatomic,readonly) BOOL shouldAvoidInPlaceSnapshottedFadeOut; 
@property (nonatomic,readonly) BOOL shouldSuppressAnimatedUpdates; 
-(id)freeze;
-(BOOL)shouldAvoidInPlaceSnapshottedFadeOut;
-(void)removeAllAnimations;
-(void)didChangeVisibleRect;
-(void)becomeReusable;
-(id)generateAssetTransitionInfo;
-(void)setActive:(BOOL)arg1 ;
-(CGRect)visibleRect;
-(id)init;
-(void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopSuppressingAnimatedUpdatesWithReason:(id)arg1 ;
-(BOOL)adoptAssetTransitionInfo:(id)arg1 ;
-(void)startSuppressingAnimatedUpdatesWithReason:(id)arg1 ;
-(void)setShouldPreserveCurrentContent:(BOOL)arg1 ;
-(void)setDetached:(BOOL)arg1 ;
-(BOOL)wantsVisibleRectChanges;
-(BOOL)isDetached;
-(BOOL)isActive;
-(void)prepareForReuse;
-(PUTileLayoutInfo *)presentationLayoutInfo;
-(PUTilingView *)tilingView;
-(PUTileLayoutInfo *)layoutInfo;
-(void)setTilingView:(PUTilingView *)arg1 ;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)didChangeAnimating;
-(void)setReusable:(BOOL)arg1 ;
-(BOOL)isPresentationActive;
-(long long)willBeginAnimation;
-(void)didEndAnimation:(long long)arg1 ;
-(void)reuseIfApplicable;
-(NSMutableArray *)reasonsToSuppressAnimatedUpdates;
-(BOOL)shouldSuppressAnimatedUpdates;
-(void)setReasonsToSuppressAnimatedUpdates:(NSMutableArray *)arg1 ;
-(id)description;
-(void)addToTilingView:(id)arg1 ;
-(BOOL)shouldPreserveCurrentContent;
-(BOOL)isReusable;
-(void)didChangeActive;
-(void)setLayoutInfo:(PUTileLayoutInfo *)arg1 ;
-(void)setPreloadedImage:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)isAnimating;
@end

