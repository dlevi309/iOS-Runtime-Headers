/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXSearchQueryOptions, NSString, NSArray;

@interface PXSearchQuery : NSObject <NSCopying> {

	PXSearchQueryOptions* _options;
	NSString* _searchText;
	NSArray* _searchTokens;
	NSString* _priorityAssetUUID;

}

@property (nonatomic,copy,readonly) NSArray * queryTokens; 
@property (nonatomic,copy,readonly) PXSearchQueryOptions * options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText;                        //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchTokens;                       //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedQueryString; 
@property (nonatomic,copy,readonly) NSString * priorityAssetUUID;                 //@synthesize priorityAssetUUID=_priorityAssetUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchText; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long searchTermCount; 
@property (nonatomic,readonly) BOOL supportsRecentSearch; 
-(id)dictionaryRepresentation;
-(NSString *)priorityAssetUUID;
-(id)init;
-(NSArray *)searchTokens;
-(BOOL)supportsRecentSearch;
-(BOOL)isEquivalentToRecentSearchQuery:(id)arg1 ;
-(PXSearchQueryOptions *)options;
-(NSArray *)queryTokens;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)searchText;
-(NSString *)localizedQueryString;
-(unsigned long long)hash;
-(BOOL)hasSearchText;
-(unsigned long long)searchTermCount;
-(BOOL)isEmpty;
-(id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 options:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

