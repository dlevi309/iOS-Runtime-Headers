/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)deleteAllNodes;
-(void)appendNode:(id)arg1 ;
-(ML3StatementCacheNode *)lastNode;
-(ML3StatementCacheNode *)firstNode;
-(unsigned long long)count;
-(id)description;
-(void)deleteOldestNode;
-(void)promoteNodeWithDictionaryKey:(id)arg1 ;
-(id)oldestNode;
@end

