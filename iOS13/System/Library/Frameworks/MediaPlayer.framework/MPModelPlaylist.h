/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelCurator, NSDate, NSURL, NSDateComponents, MPTiledArtworkRequest;

@interface MPModelPlaylist : MPModelObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) MPModelCurator * curator; 
@property (assign,nonatomic) unsigned long long trackCount; 
@property (assign,nonatomic) BOOL hasCleanContent; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (assign,getter=isCuratorPlaylist,nonatomic) BOOL curatorPlaylist; 
@property (assign,getter=isOwner,nonatomic) BOOL owner; 
@property (assign,getter=isPublicPlaylist,nonatomic) BOOL publicPlaylist; 
@property (assign,getter=isVisiblePlaylist,nonatomic) BOOL visiblePlaylist; 
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed; 
@property (assign,nonatomic) long long userEditableComponents; 
@property (assign,nonatomic) long long type; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (nonatomic,copy) NSURL * shareShortURL; 
@property (nonatomic,copy) NSDateComponents * releaseDateComponents; 
@property (nonatomic,copy) NSDateComponents * lastModifiedDateComponents; 
@property (nonatomic,copy) NSDate * lastDevicePlaybackDate; 
@property (nonatomic,copy) NSString * cloudVersionHash; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) MPTiledArtworkRequest * tiledArtworkRequest; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
+(id)__trackCount_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)__downloadedDate_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__descriptionText_KEY;
+(id)__name_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(id)__type_KEY;
+(id)__shareURL_KEY;
+(id)__curator_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)requiredKeepLocalStatusObservationProperties;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)kindWithPlaylistEntryKind:(id)arg1 options:(unsigned long long)arg2 ;
+(id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3 ;
+(id)__hasCleanContent_KEY;
+(id)__curatorPlaylist_KEY;
+(id)__owner_KEY;
+(id)__publicPlaylist_KEY;
+(id)__visiblePlaylist_KEY;
+(id)__subscribed_KEY;
+(id)__userEditableComponents_KEY;
+(id)__shareShortURL_KEY;
+(id)__releaseDateComponents_KEY;
+(id)__lastModifiedDateComponents_KEY;
+(id)__tiledArtworkRequest_KEY;
+(id)__cloudVersionHash_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
-(id)contentItemCollectionInfo;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)trackArtworkCatalogsWithCount:(long long)arg1 ;
-(id)tracksTiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
@end

