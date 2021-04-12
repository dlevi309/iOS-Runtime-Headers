/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {

	NSMutableDictionary* _statementsDictionary;
	ML3StatementCacheList* _nodeList;
	unsigned long long _cacheSize;

}

@property (nonatomic,readonly) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
-(unsigned long long)cacheSize;
-(id)cachedStatementForSQL:(id)arg1 ;
-(void)clearCache;
-(void)cacheStatement:(id)arg1 ;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(id)allStatements;
-(void)dealloc;
@end

