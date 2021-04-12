/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind : MPModelKind {

	unsigned long long _variants;
	MPModelPlaylistEntryKind* _playlistEntryKind;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long variants;                               //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) MPModelPlaylistEntryKind * playlistEntryKind;              //@synthesize playlistEntryKind=_playlistEntryKind - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)variants;
-(id)humanDescription;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(MPModelPlaylistEntryKind *)playlistEntryKind;
@end

