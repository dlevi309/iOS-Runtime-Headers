/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelAlbumKind;

@interface MPModelComposerKind : MPModelKind {

	MPModelAlbumKind* _albumKind;

}

@property (nonatomic,copy,readonly) MPModelAlbumKind * albumKind;              //@synthesize albumKind=_albumKind - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithAlbumKind:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(MPModelAlbumKind *)albumKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
@end

