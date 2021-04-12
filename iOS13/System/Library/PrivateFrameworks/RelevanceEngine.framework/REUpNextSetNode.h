/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMutableArray;

@interface REUpNextSetNode : NSObject {

	id _item;
	REUpNextSetNode* _parent;
	NSMutableArray* _children;
	unsigned long long _rank;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) REUpNextSetNode * parent;               //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                //@synthesize rank=_rank - In the implementation block
-(REUpNextSetNode *)parent;
-(void)setParent:(REUpNextSetNode *)arg1 ;
-(id)item;
-(void)remove;
-(id)rootNode;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)join:(id)arg1 ;
@end

