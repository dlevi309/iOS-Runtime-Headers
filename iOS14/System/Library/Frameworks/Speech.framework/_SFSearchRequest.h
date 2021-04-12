/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/


@class NSDictionary;

@interface _SFSearchRequest : NSObject {

	long long _searchTypes;
	NSDictionary* _headerFields;
	NSDictionary* _queryParameters;

}

@property (assign,nonatomic) long long searchTypes;                     //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(void)setSearchTypes:(long long)arg1 ;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)headerFields;
-(NSDictionary *)queryParameters;
-(long long)searchTypes;
@end

