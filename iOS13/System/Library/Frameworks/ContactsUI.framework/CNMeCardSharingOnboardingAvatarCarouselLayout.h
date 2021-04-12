/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout
+(id)indexPathForNearestItemToCenterWithOffset:(CGPoint)arg1 collectionView:(id)arg2 layout:(id)arg3 ;
-(double)pagingLength;
-(double)pagingOrigin;
-(long long)selectedPageIndex;
-(double)pageOffsetForIndex:(long long)arg1 ;
-(CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2 ;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3 ;
@end

