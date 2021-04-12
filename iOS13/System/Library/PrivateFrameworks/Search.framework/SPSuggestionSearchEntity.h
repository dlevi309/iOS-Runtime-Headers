/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/SPSearchEntity.h>

@class NSString;

@interface SPSuggestionSearchEntity : SPSearchEntity {

	NSString* _queryString;
	NSString* _tokenText;

}

@property (nonatomic,retain) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSString * tokenText;                //@synthesize tokenText=_tokenText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)initWithQueryString:(id)arg1 tokenText:(id)arg2 ;
-(NSString *)tokenText;
-(void)setTokenText:(NSString *)arg1 ;
@end

