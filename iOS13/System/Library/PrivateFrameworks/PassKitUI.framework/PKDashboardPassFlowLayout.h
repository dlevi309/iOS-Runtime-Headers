/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	double _revealingContentOffset;
	CGSize _passCellSize;
	NSMutableDictionary* _attributesPerIndexPath;
	CGSize _currentSize;
	BOOL _isCompactUI;
	BOOL _preventLayoutComputation;
	BOOL _fade;

}

@property (assign,nonatomic) BOOL fade;                             //@synthesize fade=_fade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(BOOL)fade;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
-(void)setFade:(BOOL)arg1 ;
-(void)revealContentAnimated:(BOOL)arg1 ;
-(void)hideContent;
-(id)_indexPathForPassGroup;
-(BOOL)_indexPathIsPassGroupIndexPath:(id)arg1 ;
-(id)_customAttribuesForPassAtTheTop:(id)arg1 ;
@end

