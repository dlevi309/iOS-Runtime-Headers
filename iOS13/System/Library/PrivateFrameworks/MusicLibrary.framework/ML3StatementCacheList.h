/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject {

	ML3StatementCacheNode* _firstNode;
	ML3StatementCacheNode* _lastNode;

}

@property (nonatomic,readonly) ML3StatementCacheNode * firstNode;              //@synthesize firstNode=_firstNode - In the implementation block
@property (nonatomic,readonly) ML3StatementCacheNode * lastNode;               //@synthesize lastNode=_lastNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)description;
-(unsigned long long)count;
-(ML3StatementCacheNode *)firstNode;
-(void)appendNode:(id)arg1 ;
-(void)promoteNodeWithDictionaryKey:(id)arg1 ;
-(id)oldestNode;
-(void)deleteOldestNode;
-(void)deleteAllNodes;
-(ML3StatementCacheNode *)lastNode;
@end

