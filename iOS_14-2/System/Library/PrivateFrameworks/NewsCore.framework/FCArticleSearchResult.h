/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCHeadlineProviding;
@class NSString, SFSearchResult;

@interface FCArticleSearchResult : NSObject {

	NSString* _articleID;
	id<FCHeadlineProviding> _deflatedHeadline;
	id<FCHeadlineProviding> _inflatedHeadline;
	SFSearchResult* _searchResult;

}

@property (nonatomic,retain) SFSearchResult * searchResult;                           //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineProviding> deflatedHeadline;              //@synthesize deflatedHeadline=_deflatedHeadline - In the implementation block
@property (nonatomic,retain) id<FCHeadlineProviding> inflatedHeadline;                //@synthesize inflatedHeadline=_inflatedHeadline - In the implementation block
-(SFSearchResult *)searchResult;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(NSString *)articleID;
-(id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2 ;
-(id<FCHeadlineProviding>)deflatedHeadline;
-(id<FCHeadlineProviding>)inflatedHeadline;
-(void)setInflatedHeadline:(id<FCHeadlineProviding>)arg1 ;
@end

