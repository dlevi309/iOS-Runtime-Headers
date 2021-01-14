/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WBSURLSuffixChecker, NSString, WBSOpenSearchURLTemplate, NSDictionary, NSArray;

@interface WBSSearchProvider : NSObject <NSCopying, NSSecureCoding> {

	WBSURLSuffixChecker* _suffixChecker;
	NSString* _queryKey;
	BOOL _usesSearchTermsFromFragment;
	NSString* _shortName;
	WBSOpenSearchURLTemplate* _searchURLTemplate;
	WBSOpenSearchURLTemplate* _safeSearchURLTemplate;
	NSDictionary* _safeSearchURLQueryParameters;
	WBSOpenSearchURLTemplate* _suggestionsURLTemplate;
	NSArray* _hostSuffixes;
	NSArray* _pathPrefixes;
	NSString* _groupIdentifierQueryStringKey;

}

@property (nonatomic,copy,readonly) NSString * shortName;                                      //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate;                   //@synthesize searchURLTemplate=_searchURLTemplate - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * safeSearchURLTemplate;               //@synthesize safeSearchURLTemplate=_safeSearchURLTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * safeSearchURLQueryParameters;               //@synthesize safeSearchURLQueryParameters=_safeSearchURLQueryParameters - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * suggestionsURLTemplate;              //@synthesize suggestionsURLTemplate=_suggestionsURLTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hostSuffixes;                                    //@synthesize hostSuffixes=_hostSuffixes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pathPrefixes;                                    //@synthesize pathPrefixes=_pathPrefixes - In the implementation block
@property (nonatomic,readonly) BOOL usesSearchTermsFromFragment;                               //@synthesize usesSearchTermsFromFragment=_usesSearchTermsFromFragment - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifierQueryStringKey;                  //@synthesize groupIdentifierQueryStringKey=_groupIdentifierQueryStringKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)safeSearchURLForSearchURL:(id)arg1 ;
-(id)userVisibleQueryFromSearchURL:(id)arg1 ;
-(NSString *)groupIdentifierQueryStringKey;
-(BOOL)usesSearchTermsFromFragment;
-(id)userVisibleQueryFromSearchURL:(id)arg1 allowQueryThatLooksLikeURL:(BOOL)arg2 ;
-(NSArray *)pathPrefixes;
-(id)suggestionsURLForUserTypedString:(id)arg1 ;
-(NSArray *)hostSuffixes;
-(id)searchURLForUserTypedString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)searchShouldUseSafeSearchTemplate;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(NSDictionary *)safeSearchURLQueryParameters;
-(id)initWithShortName:(id)arg1 searchURLTemplate:(id)arg2 safeSearchURLTemplate:(id)arg3 safeSearchURLQueryParameters:(id)arg4 usesSearchTermsFromFragment:(BOOL)arg5 groupIdentifierQueryStringKey:(id)arg6 suggestionsURLTemplate:(id)arg7 hostSuffixes:(id)arg8 pathPrefixes:(id)arg9 ;
-(NSString *)shortName;
-(WBSOpenSearchURLTemplate *)safeSearchURLTemplate;
-(BOOL)urlIsValidSearch:(id)arg1 ;
-(id)_urlByEnsuringQueryItemInURL:(id)arg1 percentEncodedQueryItemKey:(id)arg2 percentEncodedQueryItemValue:(id)arg3 ;
-(id)description;
-(WBSOpenSearchURLTemplate *)suggestionsURLTemplate;
-(id)urlAttributingToSafariIfValidSearchURL:(id)arg1 ;
-(id)urlByIncorporatingGroupIdentifier:(unsigned long long)arg1 ifIsValidSearchResultsURL:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

