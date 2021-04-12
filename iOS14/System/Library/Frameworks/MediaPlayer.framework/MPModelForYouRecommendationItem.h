/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSURL, MPModelAlbum, MPModelPlaylist, MPModelRadioStation, MPModelForYouRecommendationGroup;

@interface MPModelForYouRecommendationItem : MPModelObject

@property (assign,nonatomic) unsigned long long itemType; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
@property (assign,nonatomic,__weak) MPModelForYouRecommendationGroup * parentGroup; 
@property (assign,nonatomic) long long subgroupIndex; 
@property (assign,getter=isBackedByStoreItemMetadata,nonatomic) BOOL backedByStoreItemMetadata; 
@property (nonatomic,readonly) MPModelForYouRecommendationGroup * subgroup; 
+(id)__itemType_KEY;
+(id)__album_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__playlist_KEY;
+(id)__url_KEY;
+(id)__radioStation_KEY;
+(id)__backedByStoreItemMetadata_KEY;
+(id)__parentGroup_KEY;
+(id)__subgroupIndex_KEY;
-(MPModelForYouRecommendationGroup *)subgroup;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
@end

