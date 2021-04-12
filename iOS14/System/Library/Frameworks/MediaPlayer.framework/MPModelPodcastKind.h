/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind : MPModelKind {

	MPModelPodcastEpisodeKind* _episodeKind;

}

@property (nonatomic,readonly) MPModelPodcastEpisodeKind * episodeKind;              //@synthesize episodeKind=_episodeKind - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)identityKind;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(MPModelPodcastEpisodeKind *)episodeKind;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

