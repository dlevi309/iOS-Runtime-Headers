/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)setDisableItemAnimations:(BOOL)arg1 ;
-(id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 movedFromIndexPath:(id)arg2 ;
-(id)proposedLayoutAttributesForNewItemAtIndexPath:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithConnectorColor:(id)arg1 connectorWidth:(double)arg2 ;
-(void)setShowsFooterConnector:(BOOL)arg1 ;
-(UIColor *)connectorColor;
-(id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 withSize:(CGSize)arg2 fromAbove:(BOOL)arg3 ;
-(void)updateIndexPaths;
-(void)calculateAttributes;
-(void)populateInvalidatedDelegateCache;
-(void)populateUpdatedDelegateCache;
-(BOOL)disableItemAnimations;
-(double)connectorWidth;
-(BOOL)showsFooterConnector;
@end

