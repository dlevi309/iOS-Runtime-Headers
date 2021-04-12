/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSHashTable;

@interface REDependencyGraphNode : NSObject {

	id _item;
	NSHashTable* _connections;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;              //@synthesize connections=_connections - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)item;
-(id)initWithItem:(id)arg1 ;
-(NSHashTable *)connections;
-(void)setConnections:(NSHashTable *)arg1 ;
@end

