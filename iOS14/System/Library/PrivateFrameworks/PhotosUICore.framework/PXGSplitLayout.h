/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@class PXGLayout;

@interface PXGSplitLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _additionalUpdateFlags;
	BOOL _settingSublayouts;
	BOOL _isUpdatingSublayouts;
	BOOL _isPerformingAdditionalUpdate;
	BOOL _floatingModesRespectSafeArea;
	BOOL _shouldExcludeTopAndBottomPaddingFromReferenceSize;
	PXGLayout* _firstSublayout;
	PXGLayout* _secondSublayout;
	long long _mode;
	double _interlayoutSpacing;
	UIEdgeInsets _padding;
	UIEdgeInsets _presentedPadding;

}

@property (nonatomic,readonly) long long firstSublayoutIndex; 
@property (nonatomic,readonly) long long secondSublayoutIndex; 
@property (nonatomic,retain) PXGLayout * firstSublayout;                                          //@synthesize firstSublayout=_firstSublayout - In the implementation block
@property (nonatomic,retain) PXGLayout * secondSublayout;                                         //@synthesize secondSublayout=_secondSublayout - In the implementation block
@property (assign,nonatomic) long long mode;                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL floatingModesRespectSafeArea;                                   //@synthesize floatingModesRespectSafeArea=_floatingModesRespectSafeArea - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;                                           //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize;              //@synthesize shouldExcludeTopAndBottomPaddingFromReferenceSize=_shouldExcludeTopAndBottomPaddingFromReferenceSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets presentedPadding;                                     //@synthesize presentedPadding=_presentedPadding - In the implementation block
-(long long)mode;
-(void)viewEnvironmentDidChange;
-(void)screenScaleDidChange;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)visibleRectDidChange;
-(void)userInterfaceDirectionDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)removeSublayoutsInRange:(NSRange)arg1 ;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(double)interlayoutSpacing;
-(void)setMode:(long long)arg1 ;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(void)_updateSublayoutGeometries;
-(void)update;
-(void)setFirstSublayout:(PXGLayout *)arg1 ;
-(void)setSecondSublayout:(PXGLayout *)arg1 ;
-(void)_replaceSublayout:(id)arg1 withSublayout:(id)arg2 atIndex:(long long)arg3 ;
-(long long)firstSublayoutIndex;
-(long long)secondSublayoutIndex;
-(void)setShouldExcludeTopAndBottomPaddingFromReferenceSize:(BOOL)arg1 ;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(PXGLayout *)firstSublayout;
-(PXGLayout *)secondSublayout;
-(BOOL)floatingModesRespectSafeArea;
-(void)setFloatingModesRespectSafeArea:(BOOL)arg1 ;
-(UIEdgeInsets)presentedPadding;
-(BOOL)shouldExcludeTopAndBottomPaddingFromReferenceSize;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)didChangeSublayoutOrigins;
@end

