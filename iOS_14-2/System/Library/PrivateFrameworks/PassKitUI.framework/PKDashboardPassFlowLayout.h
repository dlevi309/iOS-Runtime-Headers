/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDashboardLayout.h>

@class NSMutableDictionary, NSString;

@interface PKDashboardPassFlowLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, PKDashboardLayout> {

	BOOL _needsCustomLocation;
	BOOL _userIsActivelyDragging;
	BOOL _currentDraggingWentBelowThreshold;
	BOOL _userIsHoldingCardInCurrentDrag;
	BOOL _userWasHoldingCard;
	BOOL _bouncing;
	BOOL _showNonPassCells;
	BOOL _revealingItems;
	CGSize _passCellSize;
	NSMutableDictionary* _attributesPerIndexPath;
	CGSize _currentSize;
	BOOL _isCompactUI;
	BOOL _preventLayoutComputation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL fade; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)_indexPathForPassGroup;
-(BOOL)_indexPathIsPassGroupIndexPath:(id)arg1 ;
-(id)_customAttribuesForPassAtTheTop:(id)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(void)hideContent;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
-(void)revealContentAnimated:(BOOL)arg1 ;
@end

