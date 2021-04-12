/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSMutableDictionary, NSIndexSet, NSSet;

@interface _UICollectionLayoutSolveParameters : NSObject <NSCopying> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryDict;
	BOOL _isFullResolve;
	CGPoint _scrollOffset;
	CGRect _visibleBounds;

}

@property (nonatomic,readonly) BOOL isFullResolve; 
@property (nonatomic,readonly) BOOL hasInvalidatedItems; 
@property (nonatomic,readonly) CGPoint scrollOffset;                           //@synthesize scrollOffset=_scrollOffset - In the implementation block
@property (nonatomic,readonly) CGRect visibleBounds;                           //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
+(id)parametersForFullResolve;
-(CGRect)visibleBounds;
-(CGPoint)scrollOffset;
-(id)init;
-(void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2 ;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(id)copyWithScrollOffset:(CGPoint)arg1 visibleBounds:(CGRect)arg2 ;
-(BOOL)hasInvalidatedItems;
-(void)addItemIndex:(long long)arg1 ;
-(NSSet *)invalidatedAuxillaryKinds;
-(id)initWithInvalidatedIndexes:(id)arg1 ;
-(BOOL)isFullResolve;
-(id)invalidatedAuxillaryOffsets;
-(id)initWithInvalidatedIndexes:(id)arg1 scrollOffset:(CGPoint)arg2 visibleBounds:(CGRect)arg3 ;
-(NSIndexSet *)invalidatedIndexes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInvalidatedIndexes:(id)arg1 invalidatedAuxillaryDict:(id)arg2 isFullResolve:(BOOL)arg3 scrollOffset:(CGPoint)arg4 visibleBounds:(CGRect)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

