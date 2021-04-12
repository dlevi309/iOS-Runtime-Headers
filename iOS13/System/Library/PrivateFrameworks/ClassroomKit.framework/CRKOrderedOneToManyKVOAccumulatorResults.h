/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSIndexSet, NSArray;

@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject {

	NSIndexSet* _insertions;
	NSIndexSet* _deletions;
	NSIndexSet* _replacements;
	NSArray* _moves;

}

@property (nonatomic,retain) NSIndexSet * insertions;                  //@synthesize insertions=_insertions - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletions;                   //@synthesize deletions=_deletions - In the implementation block
@property (nonatomic,retain) NSIndexSet * replacements;                //@synthesize replacements=_replacements - In the implementation block
@property (nonatomic,retain) NSArray * moves;                          //@synthesize moves=_moves - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long netCountChange; 
-(id)description;
-(BOOL)isEmpty;
-(NSIndexSet *)insertions;
-(NSIndexSet *)replacements;
-(void)setReplacements:(NSIndexSet *)arg1 ;
-(NSIndexSet *)deletions;
-(long long)netCountChange;
-(void)setDeletions:(NSIndexSet *)arg1 ;
-(void)setInsertions:(NSIndexSet *)arg1 ;
-(void)setMoves:(NSArray *)arg1 ;
-(NSArray *)moves;
-(id)resultsByExcludingLocalDeletions:(id)arg1 ;
@end

