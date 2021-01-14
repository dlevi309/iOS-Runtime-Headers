/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelAlbumKind;

@interface MPModelGenreKind : MPModelKind {

	MPModelAlbumKind* _albumKind;

}

@property (nonatomic,copy,readonly) MPModelAlbumKind * albumKind;              //@synthesize albumKind=_albumKind - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithAlbumKind:(id)arg1 ;
+(id)identityKind;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(MPModelAlbumKind *)albumKind;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

