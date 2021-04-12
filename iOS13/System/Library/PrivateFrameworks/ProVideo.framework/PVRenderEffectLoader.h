/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderEffectLoader : NSObject {

	deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem> >* _loadedEffects;
	HGSynchronizable* _lock;
	BOOL _flushesOnEffectStackChanges;
	float _unusedEffectTimeout;

}

@property (assign,nonatomic) float unusedEffectTimeout;              //@synthesize unusedEffectTimeout=_unusedEffectTimeout - In the implementation block
-(id)init;
-(void)dealloc;
-(void)unloadEffects;
-(void)_removeUnusedEffects_noLock:(id)arg1 ;
-(void)_loadEffects_noLock:(id)arg1 ;
-(void)_removeTimedOutEffects_noLock;
-(float)unusedEffectTimeout;
-(void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)ageOutEffects;
-(void)setUnusedEffectTimeout:(float)arg1 ;
@end

