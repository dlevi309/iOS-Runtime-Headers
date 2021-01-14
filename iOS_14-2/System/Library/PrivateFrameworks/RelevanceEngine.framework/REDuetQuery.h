/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)transformBlock;
-(void)setTransformBlock:(id)arg1 ;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(void)setQuery:(_DKQuery *)arg1 ;
@end

