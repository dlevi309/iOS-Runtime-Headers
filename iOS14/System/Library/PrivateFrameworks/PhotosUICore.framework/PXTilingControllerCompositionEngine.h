/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTilingScrollControllerUpdateDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerObserver.h>
#import <libobjc.A.dylib/PXTilingControllerCompositionObserver.h>
#import <libobjc.A.dylib/PXTilingControllerCompositionInput.h>
#import <libobjc.A.dylib/PXTilingControllerCompositionOutput.h>

@protocol PXTilingScrollController;
@class NSArray, NSHashTable, PXTilingControllerComposition, PXTilingControllerDefaultComposition, NSMutableArray, NSString;

@interface PXTilingControllerCompositionEngine : NSObject <PXTilingScrollControllerUpdateDelegate, PXTilingControllerObserver, PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput> {

	BOOL _isPerformingChanges;
	BOOL _isUpdatingComposition;
	SCD_Struct_PX59 _needsUpdateFlags;
	id<PXTilingScrollController> __scrollController;
	NSHashTable* __tilingControllers;
	NSHashTable* __compositions;
	PXTilingControllerComposition* __composition;
	PXTilingControllerDefaultComposition* __defaultComposition;
	NSMutableArray* __invalidationContexts;
	NSMutableArray* __tilingControllersRequestingFocus;
	CGSize __referenceSize;
	UIEdgeInsets __contentInset;

}

@property (nonatomic,__weak,readonly) id<PXTilingScrollController> _scrollController;                           //@synthesize _scrollController=__scrollController - In the implementation block
@property (nonatomic,readonly) NSHashTable * _tilingControllers;                                                //@synthesize _tilingControllers=__tilingControllers - In the implementation block
@property (nonatomic,readonly) NSHashTable * _compositions;                                                     //@synthesize _compositions=__compositions - In the implementation block
@property (setter=_setComposition:,nonatomic,retain) PXTilingControllerComposition * _composition;              //@synthesize _composition=__composition - In the implementation block
@property (nonatomic,readonly) PXTilingControllerDefaultComposition * _defaultComposition;                      //@synthesize _defaultComposition=__defaultComposition - In the implementation block
@property (assign,setter=_setReferenceSize:,nonatomic) CGSize _referenceSize;                                   //@synthesize _referenceSize=__referenceSize - In the implementation block
@property (assign,setter=_setContentInset:,nonatomic) UIEdgeInsets _contentInset;                               //@synthesize _contentInset=__contentInset - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _invalidationContexts;                                          //@synthesize _invalidationContexts=__invalidationContexts - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _tilingControllersRequestingFocus;                              //@synthesize _tilingControllersRequestingFocus=__tilingControllersRequestingFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) NSArray * tilingControllersRequestingFocus; 
@property (nonatomic,readonly) NSArray * invalidationContexts; 
+(id)compositionEngineForScrollController:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(UIEdgeInsets)_contentInset;
-(id)init;
-(PXTilingControllerComposition *)_composition;
-(UIEdgeInsets)contentInset;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(CGSize)referenceSize;
-(void)_setReferenceSize:(CGSize)arg1 ;
-(void)_invalidateScrollControllerMetrics;
-(void)_updateScrollControllerMetricsIfNeeded;
-(void)_endUpdate;
-(void)_setContentInset:(UIEdgeInsets)arg1 ;
-(void)setReferenceSize:(CGSize)arg1 contentInset:(UIEdgeInsets)arg2 forTilingController:(id)arg3 ;
-(void)setOrigin:(CGPoint)arg1 forTilingController:(id)arg2 ;
-(void)_setComposition:(id)arg1 ;
-(void)setContentBounds:(CGRect)arg1 scrollBounds:(CGRect)arg2 scrollInfo:(id)arg3 ;
-(CGRect)contentBoundsForTilingController:(id)arg1 ;
-(CGRect)scrollBoundsForTilingController:(id)arg1 ;
-(id)scrollInfoForTilingController:(id)arg1 ;
-(CGPoint)preferredOriginForTilingController:(id)arg1 ;
-(CGPoint)originForTilingController:(id)arg1 ;
-(NSHashTable *)_compositions;
-(CGRect)convertRect:(CGRect)arg1 fromTilingController:(id)arg2 ;
-(id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2 ;
-(NSArray *)tilingControllersRequestingFocus;
-(void)setTilingControllerCompositionNeedsUpdate:(id)arg1 withContext:(id)arg2 ;
-(void)setTilingControllerNeedsUpdate:(id)arg1 ;
-(id)_initWithScrollController:(id)arg1 ;
-(void)tilingController:(id)arg1 invalidatedWithContext:(long long)arg2 ;
-(void)registerTilingController:(id)arg1 ;
-(void)unregisterTilingController:(id)arg1 ;
-(void)registerComposition:(id)arg1 ;
-(void)unregisterComposition:(id)arg1 ;
-(void)_invalidateComposition;
-(BOOL)_updateCompositionIfNeeded;
-(PXTilingControllerDefaultComposition *)_defaultComposition;
-(CGPoint)convertPoint:(CGPoint)arg1 fromTilingController:(id)arg2 ;
-(NSMutableArray *)_invalidationContexts;
-(NSMutableArray *)_tilingControllersRequestingFocus;
-(void)_beginUpdate;
-(NSHashTable *)_tilingControllers;
-(BOOL)_needsUpdate;
-(id<PXTilingScrollController>)_scrollController;
-(void)tilingScrollControllerDidUpdate:(id)arg1 ;
-(CGSize)_referenceSize;
-(void)_setNeedsUpdate;
-(NSArray *)invalidationContexts;
@end

