/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3 ;
+(id)identityKind;
-(unsigned long long)variants;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(MPModelPlaylistEntryKind *)playlistEntryKind;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

