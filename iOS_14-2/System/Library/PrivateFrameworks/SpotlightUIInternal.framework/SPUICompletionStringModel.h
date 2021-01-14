/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@class NSString;

@interface SPUICompletionStringModel : NSObject {

	BOOL _searchFieldHasTokens;
	BOOL _hasMarkedText;
	NSString* _displayedText;
	unsigned long long _queryId;

}

@property (nonatomic,readonly) NSString * displayedText;                //@synthesize displayedText=_displayedText - In the implementation block
@property (nonatomic,readonly) BOOL searchFieldHasTokens;               //@synthesize searchFieldHasTokens=_searchFieldHasTokens - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedText;                      //@synthesize hasMarkedText=_hasMarkedText - In the implementation block
@property (nonatomic,readonly) unsigned long long queryId;              //@synthesize queryId=_queryId - In the implementation block
-(unsigned long long)queryId;
-(BOOL)hasMarkedText;
-(NSString *)displayedText;
-(id)initWithTypedString:(id)arg1 hasTokens:(BOOL)arg2 queryId:(unsigned long long)arg3 hasMarkedText:(BOOL)arg4 ;
-(BOOL)searchFieldHasTokens;
@end

