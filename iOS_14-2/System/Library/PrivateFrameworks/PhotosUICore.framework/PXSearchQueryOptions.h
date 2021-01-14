/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXSearchQueryOptions : NSObject <NSCopying> {

	BOOL _wantsCuratedAssetsFetchResult;
	BOOL _wantsLibraryChanges;
	BOOL _wantsWordEmbeddings;
	unsigned long long _curatedAssetLimit;
	unsigned long long _suggestionLimit;
	unsigned long long _filterOptions;

}

@property (assign,nonatomic) unsigned long long curatedAssetLimit;              //@synthesize curatedAssetLimit=_curatedAssetLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsCuratedAssetsFetchResult;                //@synthesize wantsCuratedAssetsFetchResult=_wantsCuratedAssetsFetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionLimit;                //@synthesize suggestionLimit=_suggestionLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsLibraryChanges;                          //@synthesize wantsLibraryChanges=_wantsLibraryChanges - In the implementation block
@property (assign,nonatomic) unsigned long long filterOptions;                  //@synthesize filterOptions=_filterOptions - In the implementation block
@property (assign,nonatomic) BOOL wantsWordEmbeddings;                          //@synthesize wantsWordEmbeddings=_wantsWordEmbeddings - In the implementation block
-(id)init;
-(unsigned long long)suggestionLimit;
-(BOOL)wantsCuratedAssetsFetchResult;
-(BOOL)wantsLibraryChanges;
-(unsigned long long)curatedAssetLimit;
-(void)setCuratedAssetLimit:(unsigned long long)arg1 ;
-(BOOL)wantsWordEmbeddings;
-(void)setFilterOptions:(unsigned long long)arg1 ;
-(unsigned long long)filterOptions;
-(id)description;
-(unsigned long long)hash;
-(void)setSuggestionLimit:(unsigned long long)arg1 ;
-(void)setWantsWordEmbeddings:(BOOL)arg1 ;
-(void)setWantsCuratedAssetsFetchResult:(BOOL)arg1 ;
-(void)setWantsLibraryChanges:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

