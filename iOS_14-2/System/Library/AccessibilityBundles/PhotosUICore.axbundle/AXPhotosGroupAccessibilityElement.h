/*
* Generated on Thursday, January 14, 2021 at 2:29:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/PhotosUICore.axbundle/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSArray;

@interface AXPhotosGroupAccessibilityElement : UIAccessibilityElement {

	id _group;
	id _view;
	NSArray* _additionalScrollViewElements;

}

@property (assign,nonatomic,__weak) id group;                                     //@synthesize group=_group - In the implementation block
@property (assign,nonatomic,__weak) id view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSArray * additionalScrollViewElements;              //@synthesize additionalScrollViewElements=_additionalScrollViewElements - In the implementation block
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setGroup:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)group;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)setView:(id)arg1 ;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrameForScrolling;
-(id)view;
-(id)accessibilityValue;
-(BOOL)_accessibilityOverridesInstructionsHint;
-(CGRect)accessibilityFrame;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)_accessibilityDefaultFocusGroupDescriptor;
-(void)setAdditionalScrollViewElements:(NSArray *)arg1 ;
-(void)_axRefreshGridGroupData:(id)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 forGroup:(id)arg2 inView:(id)arg3 withAdditionalScrollViewElements:(id)arg4 ;
-(BOOL)_axIsMonthsView;
-(BOOL)_axIsYearsView;
-(id)_axSectionHeadersInSubgroups;
-(id)_axChapterHeadersInSubgroups;
-(id)_axFilterLeafsByContentKind:(long long)arg1 ;
-(void)_axShouldShowAlternateUI:(BOOL)arg1 ;
-(id)_axCardSectionBodyInSubgroups;
-(id)_axMoreButtonInMonthsView;
-(NSArray *)additionalScrollViewElements;
-(id)_axUnsortedGroupsAccessibilityElements;
-(id)_axUnsortedLeafAccessibilityElements;
-(long long)_axCompareAXPhotoElement:(id)arg1 toElement:(id)arg2 ;
-(void)_axMoveToNextInfoInDirection:(unsigned long long)arg1 ;
-(id)_axCachedSubgroupElements;
-(id)initWithAccessibilityContainer:(id)arg1 forGroup:(id)arg2 inView:(id)arg3 ;
-(void)_setAxCachedSubgroupElements:(id)arg1 ;
-(void)_cleanupStaleGroupAccessibilityElements;
-(id)_axFilterStaleKeys:(id)arg1 usingIndexSet:(id)arg2 ;
-(void)_updateGroupAccessibilityElements;
-(id)_axGroupsAccessibilityElements;
-(BOOL)_axIsSectionHeader;
-(BOOL)_axIsChapterHeader;
-(BOOL)_axIsDecorating;
-(BOOL)_axIsCardSectionBody;
-(id)_axFilterSubgroupsByInfoSourceType:(id)arg1 ;
-(id)_axDecoratingInSubgroups;
-(id)_axCachedLeafElements;
-(id)_accessibilityCuratedLibraryUIViewController;
-(id)_accessibilityInfoSource;
-(void)_updateLeafAccessibilityElements:(id)arg1 forVisibleSpriteIndexes:(id)arg2 ;
-(void)_setAxCachedLeafElements:(id)arg1 ;
-(void)_cleanupStaleLeafAccessibilityElements;
-(void)_updateLeafAccessibilityElementsIfNeeded;
-(id)_axLeafAccessibilityElements;
-(void)_axContainingGroup:(id)arg1 performedAction:(long long)arg2 withUserInfo:(id)arg3 ;
-(BOOL)_axInfoSourceHasClassName:(id)arg1 ;
-(BOOL)_axIsAssetSection;
-(BOOL)_axInZoomLevel:(long long)arg1 ;
-(BOOL)_axIsInlineHeader;
-(BOOL)_axIsGrid;
-(BOOL)_axIsDaysView;
-(BOOL)_axInAllPhotosView;
@end

