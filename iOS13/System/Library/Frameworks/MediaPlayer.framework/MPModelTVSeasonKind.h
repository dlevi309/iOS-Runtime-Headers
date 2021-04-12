/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind {

	MPModelTVEpisodeKind* _episodeKind;

}

@property (nonatomic,readonly) MPModelTVEpisodeKind * episodeKind;              //@synthesize episodeKind=_episodeKind - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithEpisodeKind:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(MPModelTVEpisodeKind *)episodeKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
@end

