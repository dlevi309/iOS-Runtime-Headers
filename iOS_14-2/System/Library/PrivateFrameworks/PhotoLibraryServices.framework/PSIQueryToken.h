/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSIndexSet, PSIWordEmbeddingMatch, NSMutableSet, NSDictionary;

@interface PSIQueryToken : NSObject <NSSecureCoding> {

	BOOL _userControlledCategoriesUseWildcard;
	BOOL _usesWordEmbeddings;
	BOOL _isFilterTypeToken;
	BOOL _isFullTextToken;
	BOOL _belongsToSearchText;
	NSString* _text;
	NSString* _identifier;
	NSIndexSet* _searchedCategories;
	unsigned long long _userCategory;
	unsigned long long _matchType;
	PSIQueryToken* _parentToken;
	NSString* _normalizedText;
	PSIWordEmbeddingMatch* _wordEmbeddingMatch;
	NSMutableSet* _assetIds;
	NSMutableSet* _collectionIds;
	NSDictionary* _dateAttributes;
	NSRange _rangeInSearchText;

}

@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * normalizedText;                                 //@synthesize normalizedText=_normalizedText - In the implementation block
@property (nonatomic,copy,readonly) NSString * resolvedText; 
@property (nonatomic,copy,readonly) NSString * wildcardResolvedText; 
@property (nonatomic,retain) PSIWordEmbeddingMatch * wordEmbeddingMatch;              //@synthesize wordEmbeddingMatch=_wordEmbeddingMatch - In the implementation block
@property (assign,nonatomic) BOOL isFullTextToken;                                    //@synthesize isFullTextToken=_isFullTextToken - In the implementation block
@property (assign,nonatomic) BOOL belongsToSearchText;                                //@synthesize belongsToSearchText=_belongsToSearchText - In the implementation block
@property (assign,nonatomic) unsigned long long userCategory;                         //@synthesize userCategory=_userCategory - In the implementation block
@property (nonatomic,copy) NSIndexSet * searchedCategories;                           //@synthesize searchedCategories=_searchedCategories - In the implementation block
@property (nonatomic,readonly) BOOL containsMarker; 
@property (nonatomic,retain) NSMutableSet * assetIds;                                 //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionIds;                            //@synthesize collectionIds=_collectionIds - In the implementation block
@property (nonatomic,retain) NSDictionary * dateAttributes;                           //@synthesize dateAttributes=_dateAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long matchType;                          //@synthesize matchType=_matchType - In the implementation block
@property (assign,nonatomic) BOOL userControlledCategoriesUseWildcard;                //@synthesize userControlledCategoriesUseWildcard=_userControlledCategoriesUseWildcard - In the implementation block
@property (assign,nonatomic) BOOL usesWordEmbeddings;                                 //@synthesize usesWordEmbeddings=_usesWordEmbeddings - In the implementation block
@property (assign,nonatomic) BOOL isFilterTypeToken;                                  //@synthesize isFilterTypeToken=_isFilterTypeToken - In the implementation block
@property (assign,nonatomic) NSRange rangeInSearchText;                               //@synthesize rangeInSearchText=_rangeInSearchText - In the implementation block
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) unsigned long long collectionCount; 
@property (nonatomic,readonly) unsigned long long resultCount; 
@property (nonatomic,retain) PSIQueryToken * parentToken;                             //@synthesize parentToken=_parentToken - In the implementation block
@property (nonatomic,readonly) BOOL isTextSearchable; 
@property (nonatomic,copy,readonly) NSString * groupMatchingText; 
@property (nonatomic,copy,readonly) NSDictionary * debugDictionary; 
+(BOOL)supportsSecureCoding;
+(id)stringForMatchType:(unsigned long long)arg1 ;
+(id)personQueryTokensFromSocialGroupQueryToken:(id)arg1 ;
-(void)setCollectionIds:(NSMutableSet *)arg1 ;
-(NSMutableSet *)collectionIds;
-(void)normalizeTextWithTokenizer:(id)arg1 ;
-(NSString *)groupMatchingText;
-(unsigned long long)resultCount;
-(unsigned long long)userCategory;
-(id)initWithText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6 ;
-(BOOL)containsMarker;
-(void)replaceIdentifier:(id)arg1 ;
-(id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4 ;
-(NSString *)resolvedText;
-(id)tokenByWordEmbeddingWithMatch:(id)arg1 ;
-(BOOL)userControlledCategoriesUseWildcard;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setParentToken:(PSIQueryToken *)arg1 ;
-(void)setRangeInSearchText:(NSRange)arg1 ;
-(BOOL)usesWordEmbeddings;
-(unsigned long long)assetCount;
-(void)setNormalizedText:(NSString *)arg1 ;
-(void)setIsFullTextToken:(BOOL)arg1 ;
-(NSRange)rangeInSearchText;
-(NSIndexSet *)searchedCategories;
-(id)description;
-(NSString *)wildcardResolvedText;
-(NSDictionary *)debugDictionary;
-(BOOL)isFullTextToken;
-(void)setUserControlledCategoriesUseWildcard:(BOOL)arg1 ;
-(BOOL)belongsToSearchText;
-(id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 ;
-(NSString *)text;
-(id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 ;
-(void)setIsFilterTypeToken:(BOOL)arg1 ;
-(BOOL)isTextSearchable;
-(id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4 ;
-(unsigned long long)hash;
-(void)setBelongsToSearchText:(BOOL)arg1 ;
-(PSIWordEmbeddingMatch *)wordEmbeddingMatch;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)normalizedText;
-(BOOL)isFilterTypeToken;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSearchedCategories:(NSIndexSet *)arg1 ;
-(NSString *)identifier;
-(NSMutableSet *)assetIds;
-(void)setDateAttributes:(NSDictionary *)arg1 ;
-(void)setAssetIds:(NSMutableSet *)arg1 ;
-(id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5 ;
-(NSDictionary *)dateAttributes;
-(void)setUsesWordEmbeddings:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3 ;
-(PSIQueryToken *)parentToken;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWordEmbeddingMatch:(PSIWordEmbeddingMatch *)arg1 ;
-(void)setUserCategory:(unsigned long long)arg1 ;
-(unsigned long long)matchType;
-(unsigned long long)collectionCount;
@end

