/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, NSMutableIndexSet, NSArray, NSIndexSet;

@interface _UIUpdateVisibleCellsContext : NSObject {

	NSMutableArray* _sizes;
	NSMutableArray* _attributes;
	NSMutableArray* _indexPaths;
	NSMutableIndexSet* _sectionIndexes;
	long long _visibleCellsRefCount;

}

@property (nonatomic,readonly) NSArray * sizes;                           //@synthesize sizes=_sizes - In the implementation block
@property (nonatomic,readonly) NSArray * indexPaths;                      //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionIndexes; 
@property (nonatomic,readonly) BOOL hasLeftVisibleCellsPass; 
@property (nonatomic,readonly) NSArray * attributes; 
-(id)init;
-(id)description;
-(NSArray *)attributes;
-(void)addPreferredAttributes:(id)arg1 ;
-(void)didEnterVisibleCellsPass;
-(void)didLeaveVisibleCellsPass;
-(BOOL)shouldInvalidate;
-(BOOL)hasLeftVisibleCellsPass;
-(NSArray *)sizes;
-(NSArray *)indexPaths;
-(NSIndexSet *)sectionIndexes;
@end

