/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remove;
-(NSMutableArray *)children;
-(void)setRank:(unsigned long long)arg1 ;
-(REUpNextSetNode *)parent;
-(id)item;
-(id)rootNode;
-(void)setParent:(REUpNextSetNode *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(unsigned long long)rank;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)join:(id)arg1 ;
@end

