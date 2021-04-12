/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class NSString, SFSearchSuggestion, SFSearchResult;

@interface STSCategoryResult : NSObject {

	BOOL _clearButtonHidden;
	NSString* _title;
	long long _type;
	SFSearchSuggestion* _suggestion;
	SFSearchResult* _searchResult;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL clearButtonHidden;                       //@synthesize clearButtonHidden=_clearButtonHidden - In the implementation block
@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) SFSearchResult * searchResult;                //@synthesize searchResult=_searchResult - In the implementation block
-(SFSearchResult *)searchResult;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
-(NSString *)title;
-(void)setClearButtonHidden:(BOOL)arg1 ;
-(BOOL)clearButtonHidden;
@end

