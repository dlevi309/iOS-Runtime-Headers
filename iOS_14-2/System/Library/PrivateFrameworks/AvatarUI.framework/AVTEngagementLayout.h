/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTCollectionViewLayout.h>

@interface AVTEngagementLayout : NSObject <AVTCollectionViewLayout> {

	/*^block*/id _interItemSpacingProvider;
	CGSize _defaultCellSize;
	CGSize _engagedCellSize;
	UIEdgeInsets _engagementBoundsInsets;

}

@property (nonatomic,readonly) CGSize defaultCellSize;                         //@synthesize defaultCellSize=_defaultCellSize - In the implementation block
@property (nonatomic,readonly) CGSize engagedCellSize;                         //@synthesize engagedCellSize=_engagedCellSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets engagementBoundsInsets;              //@synthesize engagementBoundsInsets=_engagementBoundsInsets - In the implementation block
@property (nonatomic,copy,readonly) id interItemSpacingProvider;               //@synthesize interItemSpacingProvider=_interItemSpacingProvider - In the implementation block
+(double)minimumInterItemSpacingForVisibileBoundsSize:(CGSize)arg1 defaultCellSize:(CGSize)arg2 engagedCellSize:(CGSize)arg3 ;
+(UIEdgeInsets)insetsToCenterFirstAndLastItemsGivenContainerSize:(CGSize)arg1 itemSize:(CGSize)arg2 ;
-(id)initWithDefaultCellSize:(CGSize)arg1 engagedCellSize:(CGSize)arg2 baseInteritemSpacing:(double)arg3 ;
-(CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3 ;
-(void)setEngagementBoundsInsets:(UIEdgeInsets)arg1 ;
-(CGSize)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2 ;
-(CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(CGRect)arg1 ;
-(CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(CGRect)arg1 ;
-(CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2 ;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3 ;
-(CGSize)defaultCellSize;
-(id)interItemSpacingProvider;
-(double)xAxisScale;
-(id)initWithDefaultCellSize:(CGSize)arg1 engagedCellSize:(CGSize)arg2 interItemSpacingProvider:(/*^block*/id)arg3 ;
-(CGSize)engagementSizeForVisibleBoundsSize:(CGSize)arg1 ;
-(UIEdgeInsets)engagementBoundsInsets;
-(CGRect)engagementBoundsForContainerBounds:(CGRect)arg1 ;
-(CGSize)cellSizeForEngagement:(double)arg1 ;
-(CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2 engagementBounds:(CGRect)arg3 verticalBounds:(CGPoint)arg4 ;
-(double)contentOriginXForVisibleSize:(CGSize)arg1 ;
-(CGRect)frameForElementAfterElementEndingAt:(double)arg1 engagementBounds:(CGRect)arg2 verticalBounds:(CGPoint)arg3 ;
-(double)spacingAfterElementEndingAt:(double)arg1 engagementBounds:(CGRect)arg2 ;
-(CGSize)engagedCellSize;
-(double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeak:(double)arg4 ;
-(double)interitemSpacingForEngagement:(double)arg1 ;
-(double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeakBegin:(double)arg4 rangePeakEnd:(double)arg5 ;
-(double)spacingBeforElementStartingAt:(double)arg1 engagementBounds:(CGRect)arg2 ;
-(double)contentTrailingXForVisibleSize:(CGSize)arg1 ;
-(CGRect)frameForElementBeforeElementStartingAt:(double)arg1 engagementBounds:(CGRect)arg2 verticalBounds:(CGPoint)arg3 ;
-(CGRect)frameForElementBeforeOriginForVisibleBounds:(CGRect)arg1 ;
@end

