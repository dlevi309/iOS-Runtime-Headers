/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionLayoutSolveResult.h>

@class NSMutableIndexSet, NSMutableDictionary, NSString, NSIndexSet, NSSet;

@interface _UICollectionLayoutSolveParameters : NSObject <_UICollectionLayoutSolveResult> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryDict;
	BOOL _isFullResolve;

}

@property (nonatomic,readonly) BOOL isFullResolve; 
@property (nonatomic,readonly) BOOL hasInvalidatedItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
+(id)parametersForFullResolve;
-(id)init;
-(NSSet *)invalidatedAuxillaryKinds;
-(void)addItemIndex:(long long)arg1 ;
-(void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2 ;
-(NSIndexSet *)invalidatedIndexes;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(BOOL)hasInvalidatedItems;
-(id)invalidatedAuxillaryOffsets;
-(BOOL)isFullResolve;
-(id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(BOOL)arg2 ;
-(id)initWithInvalidatedIndexes:(id)arg1 ;
@end

