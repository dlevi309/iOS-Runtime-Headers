/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)__title_KEY;
+(id)__feedURL_KEY;
+(id)__shareURL_KEY;
+(id)__supportsSubscription_KEY;
+(id)__author_KEY;
+(id)__artworkCatalogBlock_KEY;
-(id)artworkCatalog;
-(id)humanDescription;
@end

