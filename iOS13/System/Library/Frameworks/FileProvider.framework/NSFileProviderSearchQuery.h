/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldPerformServerSearch;
	NSString* _scopeFragment;
	NSString* _scopedToItemIdentifierBundleId;
	NSString* _keyboardLanguage;
	NSString* _providerDomainID;
	NSSet* _cachedExtensions;
	unsigned long long _trashedItemsMembership;
	NSString* _filename;
	NSSet* _allowedContentTypes;
	NSString* _scopedToItemIdentifier;
	NSString* _searchContainerItemIdentifier;

}

@property (nonatomic,copy) NSString * searchString; 
@property (nonatomic,copy) NSString * filename; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSSet * allowedContentTypes; 
@property (nonatomic,copy) NSString * keyboardLanguage; 
@property (assign,nonatomic) BOOL shouldPerformServerSearch; 
@property (assign,nonatomic) unsigned long long trashedItemsMembership; 
@property (assign,nonatomic) BOOL includesTrashedItems; 
@property (nonatomic,copy) NSString * scopeFragment; 
@property (nonatomic,copy) NSString * providerDomainID; 
@property (nonatomic,copy,readonly) NSString * filename;                                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedContentTypes;                           //@synthesize allowedContentTypes=_allowedContentTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedPathExtensions; 
@property (nonatomic,copy,readonly) NSString * scopedToItemIdentifier;                     //@synthesize scopedToItemIdentifier=_scopedToItemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchContainerItemIdentifier;              //@synthesize searchContainerItemIdentifier=_searchContainerItemIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newSearchContainerItemIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicate;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSSet *)allowedContentTypes;
-(void)setAllowedContentTypes:(NSSet *)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(void)setProviderDomainID:(NSString *)arg1 ;
-(NSString *)providerDomainID;
-(id)initWithSearchScopedToItemID:(id)arg1 ;
-(id)initWithSearchScope:(id)arg1 ;
-(void)setScopeFragment:(NSString *)arg1 ;
-(NSString *)scopedToItemIdentifier;
-(NSSet *)allowedPathExtensions;
-(NSString *)searchContainerItemIdentifier;
-(id)initWithSearchScopedToItemIdentifier:(id)arg1 providerDomainID:(id)arg2 searchContainerItemIdentifier:(id)arg3 ;
-(BOOL)isEqualToFileProviderSearchQuery:(id)arg1 ;
-(BOOL)shouldPerformServerSearch;
-(unsigned long long)trashedItemsMembership;
-(NSString *)scopeFragment;
-(void)setShouldPerformServerSearch:(BOOL)arg1 ;
-(void)setTrashedItemsMembership:(unsigned long long)arg1 ;
-(void)setIncludesTrashedItems:(BOOL)arg1 ;
-(BOOL)includesTrashedItems;
-(id)toSpotlightQueryString;
-(id)filenamePredicate;
-(id)allowedContentTypesPredicate;
@end

