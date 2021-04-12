/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelPodcastAuthor;

@interface MPModelPodcast : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * feedURL; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (assign,nonatomic) BOOL supportsSubscription; 
@property (nonatomic,retain) MPModelPodcastAuthor * author; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__title_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)__feedURL_KEY;
+(id)__shareURL_KEY;
+(id)__supportsSubscription_KEY;
+(id)__author_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
@end

