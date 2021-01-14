/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)keyboardLanguage;
-(NSString *)content;
-(id)predicate;
-(void)setContent:(NSString *)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)filename;
-(void)setProviderDomainID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSearchScopedToItemID:(id)arg1 ;
-(id)initWithSearchScope:(id)arg1 ;
-(void)setScopeFragment:(NSString *)arg1 ;
-(NSString *)providerDomainID;
-(id)description;
-(void)setAllowedContentTypes:(NSSet *)arg1 ;
-(NSString *)scopedToItemIdentifier;
-(void)setFilename:(NSString *)arg1 ;
-(NSSet *)allowedContentTypes;
-(unsigned long long)hash;
-(NSSet *)allowedPathExtensions;
-(NSString *)searchContainerItemIdentifier;
-(id)initWithSearchScopedToItemIdentifier:(id)arg1 providerDomainID:(id)arg2 searchContainerItemIdentifier:(id)arg3 ;
-(BOOL)isEqualToFileProviderSearchQuery:(id)arg1 ;
-(NSString *)scopeFragment;
-(BOOL)shouldPerformServerSearch;
-(unsigned long long)trashedItemsMembership;
-(void)setShouldPerformServerSearch:(BOOL)arg1 ;
-(void)setTrashedItemsMembership:(unsigned long long)arg1 ;
-(void)setIncludesTrashedItems:(BOOL)arg1 ;
-(BOOL)includesTrashedItems;
-(id)toSpotlightQueryString;
-(id)filenamePredicate;
-(id)allowedContentTypesPredicate;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
@end

