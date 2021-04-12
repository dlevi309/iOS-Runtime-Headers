/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSolveResult.h>
@class NSIndexSet, NSSet;


@protocol _UICollectionLayoutSolveResult <NSObject>
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@required
-(NSSet *)invalidatedAuxillaryKinds;
-(NSIndexSet *)invalidatedIndexes;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
-(id)invalidatedAuxillaryOffsets;

@end


@class NSIndexSet, NSSet, NSMutableIndexSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutSolveResult : NSObject <_UICollectionLayoutSolveResult> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryIndexesDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
-(id)init;
-(NSSet *)invalidatedAuxillaryKinds;
-(NSIndexSet *)invalidatedIndexes;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(id)invalidatedAuxillaryOffsets;
-(void)addInvalidatedItemIndexesInRange:(NSRange)arg1 ;
-(void)addInvalidatedSupplementariesWithOffsets:(id)arg1 ;
-(void)addInvalidatedAuxillaryOfKind:(id)arg1 indexes:(id)arg2 ;
-(void)addInvalidatedItemIndexes:(id)arg1 ;
-(void)addInvalidatedItemIndex:(long long)arg1 ;
-(void)addInvalidatedAuxillaryOfKind:(id)arg1 index:(long long)arg2 ;
@end

