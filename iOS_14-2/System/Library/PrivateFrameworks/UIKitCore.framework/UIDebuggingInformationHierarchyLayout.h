/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol UIDebuggingInformationHierarchyLayoutDelegate;
@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {

	NSMutableArray* _indexPathsToDelete;
	id<UIDebuggingInformationHierarchyLayoutDelegate> _delegate;
	NSDictionary* _allAttributes;
	NSMutableDictionary* _allLineAttributes;

}

@property (nonatomic,retain) NSDictionary * allAttributes;                                                   //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allLineAttributes;                                        //@synthesize allLineAttributes=_allLineAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<UIDebuggingInformationHierarchyLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)layoutAttributesClass;
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id<UIDebuggingInformationHierarchyLayoutDelegate>)delegate;
-(void)setDelegate:(id<UIDebuggingInformationHierarchyLayoutDelegate>)arg1 ;
-(void)_recomputeAttributes;
-(NSDictionary *)allAttributes;
-(NSMutableDictionary *)allLineAttributes;
-(void)setAllAttributes:(NSDictionary *)arg1 ;
-(void)setAllLineAttributes:(NSMutableDictionary *)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
@end

