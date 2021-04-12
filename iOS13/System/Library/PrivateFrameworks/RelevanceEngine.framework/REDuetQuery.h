/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class _DKQuery;

@interface REDuetQuery : NSObject {

	/*^block*/id _transformBlock;
	_DKQuery* _query;

}

@property (nonatomic,copy) id transformBlock;               //@synthesize transformBlock=_transformBlock - In the implementation block
@property (nonatomic,retain) _DKQuery * query;              //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) long long offset; 
-(_DKQuery *)query;
-(void)setQuery:(_DKQuery *)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setTransformBlock:(id)arg1 ;
-(id)transformBlock;
@end

