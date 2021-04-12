/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol OS_dispatch_queue;
#import <ProVideo/ProVideo-Structs.h>
@class NSObject;

@interface PVEffectScheduler : NSObject {

	set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >* _effectSchedule;
	set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >* _previousScheduleToUnload;
	tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long>* _lastLoadedEffectSetIterator;
	SCD_Struct_PV20 _endTime;
	BOOL _loadedFinalInstructions;
	BOOL _isExporting;
	NSObject*<OS_dispatch_queue> _loadQueue;
	BOOL _isScheduling;
	HGSynchronizable* _effectScheduleLock;
	HGRef<PVInstructionGraphContext>* _effectLoadRenderContext;

}
-(id)init;
-(void)dealloc;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)releaseAllUnusedEffects:(SCD_Struct_PV20)arg1 ;
-(BOOL)previousLoadedIteratorIsLastInList;
-(void)unloadInstructionFromPreviousSchedule;
-(void)resetSchedule:(id)arg1 ;
-(void)resetSearchPoint;
-(void)setEffectLoadingRenderContext:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(void)loadEffects:(SCD_Struct_PV20)arg1 playerRate:(float)arg2 ;
-(BOOL)loadTimeIsNearEnd:(SCD_Struct_PV20)arg1 ;
@end

