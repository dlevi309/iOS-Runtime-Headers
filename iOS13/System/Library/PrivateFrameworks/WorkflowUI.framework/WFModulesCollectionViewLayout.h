/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary, NSDictionary, UIColor;

@interface WFModulesCollectionViewLayout : UICollectionViewLayout {

	NSArray* _collectionViewIndexPaths;
	NSMutableDictionary* _itemSizes;
	NSMutableDictionary* _itemHidden;
	NSMutableDictionary* _itemOffsets;
	NSMutableDictionary* _itemConnections;
	NSMutableDictionary* _supplementaryViewSizes;
	NSMutableDictionary* _itemAttributes;
	NSMutableDictionary* _supplementaryViewAttributes;
	NSMutableDictionary* _decorationViewAttributes;
	NSMutableDictionary* _decorationViewAttributesToDisappear;
	NSMutableDictionary* _deletedSupplementaryIndexPaths;
	NSMutableDictionary* _insertedSupplementaryIndexPaths;
	NSMutableDictionary* _deletedDecorationIndexPaths;
	NSMutableDictionary* _insertedDecorationIndexPaths;
	NSDictionary* _previousItemAttributes;
	BOOL _invalidatedAndWaitingForPrepareLayout;
	BOOL _disableItemAnimations;
	BOOL _showsFooterConnector;
	UIColor* _connectorColor;
	double _connectorWidth;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic) UIEdgeInsets sectionInset;               //@synthesize sectionInset=_sectionInset - In the implementation block
@property (assign,nonatomic) BOOL disableItemAnimations;              //@synthesize disableItemAnimations=_disableItemAnimations - In the implementation block
@property (nonatomic,readonly) UIColor * connectorColor;              //@synthesize connectorColor=_connectorColor - In the implementation block
@property (nonatomic,readonly) double connectorWidth;                 //@synthesize connectorWidth=_connectorWidth - In the implementation block
@property (assign,nonatomic) BOOL showsFooterConnector;               //@synthesize showsFooterConnector=_showsFooterConnector - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(UIColor *)connectorColor;
-(id)initWithConnectorColor:(id)arg1 connectorWidth:(double)arg2 ;
-(id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 movedFromIndexPath:(id)arg2 ;
-(id)proposedLayoutAttributesForNewItemAtIndexPath:(id)arg1 withSize:(CGSize)arg2 ;
-(id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 withSize:(CGSize)arg2 fromAbove:(BOOL)arg3 ;
-(void)updateIndexPaths;
-(void)calculateAttributes;
-(void)populateInvalidatedDelegateCache;
-(void)populateUpdatedDelegateCache;
-(BOOL)disableItemAnimations;
-(void)setDisableItemAnimations:(BOOL)arg1 ;
-(double)connectorWidth;
-(BOOL)showsFooterConnector;
-(void)setShowsFooterConnector:(BOOL)arg1 ;
@end

