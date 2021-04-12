/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary, NSArray;

@interface _UICollectionViewCompositionLayout : UICollectionViewLayout {

	NSMutableDictionary* _sublayoutsDict;

}

@property (nonatomic,readonly) NSArray * sublayouts; 
+(Class)invalidationContextClass;
-(id)init;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(NSArray *)sublayouts;
-(id)_originConvertedSublayoutAttributesForAttributes:(id)arg1 inLayout:(id)arg2 ;
-(void)_prepareLayout:(id)arg1 ;
-(CGRect)_frameForLayout:(id)arg1 offset:(CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4 ;
-(void)addSublayout:(id)arg1 forRect:(CGRect)arg2 ;
-(void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5 ;
-(void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6 ;
-(void)addSublayout:(id)arg1 forElementKinds:(id)arg2 ;
-(void)removeSublayout:(id)arg1 ;
@end

