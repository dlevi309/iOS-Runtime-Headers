/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSolveResult.h>
@class NSIndexSet, NSSet;


@protocol _UICollectionLayoutSolveResult <NSObject>
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@property (nonatomic,readonly) CGPoint contentOffsetAdjustment; 
@required
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
-(NSSet *)invalidatedAuxillaryKinds;
-(CGPoint)contentOffsetAdjustment;
-(id)invalidatedAuxillaryOffsets;
-(NSIndexSet *)invalidatedIndexes;

@end


@class NSIndexSet, NSSet, NSMutableIndexSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutSolveResult : NSObject <_UICollectionLayoutSolveResult> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryIndexesDict;
	CGPoint _contentOffsetAdjustment;

}

@property (assign,nonatomic) CGPoint contentOffsetAdjustment;                  //@synthesize contentOffsetAdjustment=_contentOffsetAdjustment - In the implementation block
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(void)addInvalidatedSupplementariesWithOffsets:(id)arg1 ;
-(void)addInvalidatedAuxillaryOfKind:(id)arg1 index:(long long)arg2 ;
-(void)addInvalidatedItemIndexesInRange:(NSRange)arg1 ;
-(NSSet *)invalidatedAuxillaryKinds;
-(void)addInvalidatedAuxillaryOfKind:(id)arg1 indexes:(id)arg2 ;
-(void)addInvalidatedItemIndex:(long long)arg1 ;
-(void)addInvalidatedItemIndexes:(id)arg1 ;
-(CGPoint)contentOffsetAdjustment;
-(id)invalidatedAuxillaryOffsets;
-(NSIndexSet *)invalidatedIndexes;
@end

