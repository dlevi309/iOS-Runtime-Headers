/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGDataSourceDrivenLayout.h>

@protocol PXGSublayoutFaultingDelegate;
@class PXGSublayoutComposition, NSString;

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	long long* _currentSingleLayouts;
	long long* _pendingSingleLayouts;
	BOOL* _pendingAnimations;
	PXGSublayoutComposition* _composition;
	id<PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
	UIEdgeInsets _faultInOutsets;
	UIEdgeInsets _faultOutOutsets;

}

@property (assign,nonatomic) UIEdgeInsets faultInOutsets;                                                    //@synthesize faultInOutsets=_faultInOutsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets faultOutOutsets;                                                   //@synthesize faultOutOutsets=_faultOutOutsets - In the implementation block
@property (nonatomic,retain) PXGSublayoutComposition * composition;                                          //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic,__weak) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;              //@synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewEnvironmentDidChange;
-(void)screenScaleDidChange;
-(id)init;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)visibleRectDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(PXGSublayoutComposition *)composition;
-(void)update;
-(void)_invalidateStylableType:(long long)arg1 ;
-(void)_invalidateSublayouts;
-(void)setSublayoutIndex:(long long)arg1 forUniquelyStylableType:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateSublayoutOfStylableType:(long long)arg1 ;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)referenceSizeDidChange;
-(void)_updateSublayouts;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)didApplySublayoutChangeDetails:(id)arg1 axAdjustedSubgroupChangeDetails:(id)arg2 countAfterChanges:(long long)arg3 ;
-(void)setFaultInOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)faultInOutsets;
-(id<PXGSublayoutFaultingDelegate>)sublayoutFaultingDelegate;
-(void)setSublayoutFaultingDelegate:(id<PXGSublayoutFaultingDelegate>)arg1 ;
-(UIEdgeInsets)faultOutOutsets;
-(void)setFaultOutOutsets:(UIEdgeInsets)arg1 ;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)setComposition:(PXGSublayoutComposition *)arg1 ;
-(void)dealloc;
@end

