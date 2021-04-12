/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionCompositionalLayoutSolverResolveResult.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult <NSObject>
@property (nonatomic,readonly) CGPoint contentOffsetAdjustment; 
@property (nonatomic,readonly) CGSize contentSizeAdjustment; 
@required
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
-(CGPoint)contentOffsetAdjustment;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
-(CGSize)contentSizeAdjustment;
-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult> {

	NSMutableDictionary* _insertedSupplementaryElementKindIndexPathsDict;
	NSMutableDictionary* _insertedDecorationElementKindIndexPathsDict;
	NSMutableDictionary* _deletedSupplementaryElementKindIndexPathsDict;
	NSMutableDictionary* _deletedDecorationElementKindIndexPathsDict;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;

}

@property (assign,nonatomic) CGPoint contentOffsetAdjustment;              //@synthesize contentOffsetAdjustment=_contentOffsetAdjustment - In the implementation block
@property (assign,nonatomic) CGSize contentSizeAdjustment;                 //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addInsertedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(BOOL)arg3 ;
-(id)init;
-(void)setContentSizeAdjustment:(CGSize)arg1 ;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1 ;
-(NSString *)description;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg1 ;
-(void)addDeletedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(BOOL)arg3 ;
-(CGPoint)contentOffsetAdjustment;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1 ;
-(CGSize)contentSizeAdjustment;
-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg1 ;
@end

