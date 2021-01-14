/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasLeftVisibleCellsPass;
-(id)init;
-(NSArray *)sizes;
-(NSArray *)attributes;
-(id)description;
-(void)addPreferredAttributes:(id)arg1 ;
-(NSIndexSet *)sectionIndexes;
-(void)didLeaveVisibleCellsPass;
-(BOOL)shouldInvalidate;
-(NSArray *)indexPaths;
-(void)didEnterVisibleCellsPass;
@end

