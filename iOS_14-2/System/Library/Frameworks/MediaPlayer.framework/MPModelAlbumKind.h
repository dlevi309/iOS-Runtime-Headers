/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelSongKind;

@interface MPModelAlbumKind : MPModelKind {

	unsigned long long _variants;
	MPModelSongKind* _songKind;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long variants;              //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) MPModelSongKind * songKind;               //@synthesize songKind=_songKind - In the implementation block
@property (nonatomic,readonly) unsigned long long options;               //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3 ;
+(id)identityKind;
-(unsigned long long)variants;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(MPModelSongKind *)songKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

