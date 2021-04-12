/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelPlaylist, MPModelForYouRecommendationGroup;

@interface MPModelForYouRecommendationItem : MPModelObject

@property (assign,nonatomic) unsigned long long itemType; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (assign,nonatomic,__weak) MPModelForYouRecommendationGroup * parentGroup; 
@property (assign,nonatomic) long long subgroupIndex; 
@property (assign,getter=isBackedByStoreItemMetadata,nonatomic) BOOL backedByStoreItemMetadata; 
@property (nonatomic,readonly) MPModelForYouRecommendationGroup * subgroup; 
+(id)__album_KEY;
+(id)__playlist_KEY;
+(id)__itemType_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__backedByStoreItemMetadata_KEY;
+(id)__parentGroup_KEY;
+(id)__subgroupIndex_KEY;
-(MPModelForYouRecommendationGroup *)subgroup;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
@end

