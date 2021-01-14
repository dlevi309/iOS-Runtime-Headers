/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

