/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSIndexSet *)insertions;
-(void)setReplacements:(NSIndexSet *)arg1 ;
-(NSArray *)moves;
-(NSIndexSet *)replacements;
-(id)description;
-(BOOL)isEmpty;
-(NSIndexSet *)deletions;
-(long long)netCountChange;
-(void)setDeletions:(NSIndexSet *)arg1 ;
-(void)setInsertions:(NSIndexSet *)arg1 ;
-(void)setMoves:(NSArray *)arg1 ;
-(id)resultsByExcludingLocalDeletions:(id)arg1 ;
@end

