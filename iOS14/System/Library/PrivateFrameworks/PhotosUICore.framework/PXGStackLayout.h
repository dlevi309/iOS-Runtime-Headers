/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGDataSourceDrivenLayout.h>

@protocol PXGSublayoutFaultingDelegate;
@class NSString;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	CGPoint* _sublayoutOriginsBeforeUpdate;
	BOOL _alignsLastSublayoutToVisibleBottomEdge;
	long long _axis;
	double _interlayoutSpacing;
	id<PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
	UIEdgeInsets _flexibleRegionInsets;
	UIEdgeInsets _padding;
	UIEdgeInsets _faultInOutsets;
	UIEdgeInsets _faultOutOutsets;

}

@property (assign,nonatomic) UIEdgeInsets faultInOutsets;                                                    //@synthesize faultInOutsets=_faultInOutsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets faultOutOutsets;                                                   //@synthesize faultOutOutsets=_faultOutOutsets - In the implementation block
@property (assign,nonatomic) long long axis;                                                                 //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;                                                      //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge;                                    //@synthesize alignsLastSublayoutToVisibleBottomEdge=_alignsLastSublayoutToVisibleBottomEdge - In the implementation block
@property (assign,nonatomic,__weak) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;              //@synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAxis:(long long)arg1 ;
-(long long)axis;
-(void)viewEnvironmentDidChange;
-(UIEdgeInsets)additionalSafeAreaInsetsForSublayout:(id)arg1 ;
-(void)screenScaleDidChange;
-(id)init;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)visibleRectDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(double)interlayoutSpacing;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(void)update;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)referenceSizeDidChange;
-(UIEdgeInsets)padding;
-(void)_updateSublayouts;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)flexibleRegionInsets;
-(void)_updateInterlayoutSpacing;
-(void)invalidateAdditionalSafeAreaInsets;
-(void)setFaultInOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)faultInOutsets;
-(void)_invalidateEstimatedSublayoutContentSizes;
-(void)setAlignsLastSublayoutToVisibleBottomEdge:(BOOL)arg1 ;
-(BOOL)alignsLastSublayoutToVisibleBottomEdge;
-(id<PXGSublayoutFaultingDelegate>)sublayoutFaultingDelegate;
-(void)setSublayoutFaultingDelegate:(id<PXGSublayoutFaultingDelegate>)arg1 ;
-(UIEdgeInsets)faultOutOutsets;
-(void)setFaultOutOutsets:(UIEdgeInsets)arg1 ;
-(void)dealloc;
@end

