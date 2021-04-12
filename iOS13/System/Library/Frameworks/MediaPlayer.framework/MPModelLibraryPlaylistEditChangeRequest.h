/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary, MPSectionedCollection, NSString, UIImage, NSNumber, MPModelPlaylist;

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <NSCopying> {

	BOOL _shouldCreatePlaylist;
	BOOL _didSetPlaylistUserImage;
	MPMediaLibrary* _mediaLibrary;
	MPSectionedCollection* _playlistEntries;
	NSString* _playlistDescription;
	NSString* _playlistName;
	UIImage* _playlistUserImage;
	NSNumber* _publicPlaylist;
	NSNumber* _visiblePlaylist;
	NSNumber* _curatorPlaylist;
	NSNumber* _isOwner;
	NSString* _authorStoreIdentifier;
	MPModelPlaylist* _parentPlaylist;
	MPModelPlaylist* _playlist;

}

@property (nonatomic,readonly) BOOL didSetPlaylistUserImage;                                 //@synthesize didSetPlaylistUserImage=_didSetPlaylistUserImage - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                  //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * playlistEntries;                          //@synthesize playlistEntries=_playlistEntries - In the implementation block
@property (nonatomic,copy) NSString * playlistDescription;                                   //@synthesize playlistDescription=_playlistDescription - In the implementation block
@property (nonatomic,copy) NSString * playlistName;                                          //@synthesize playlistName=_playlistName - In the implementation block
@property (nonatomic,retain) UIImage * playlistUserImage;                                    //@synthesize playlistUserImage=_playlistUserImage - In the implementation block
@property (getter=isPublicPlaylist,nonatomic,copy) NSNumber * publicPlaylist;                //@synthesize publicPlaylist=_publicPlaylist - In the implementation block
@property (getter=isVisiblePlaylist,nonatomic,copy) NSNumber * visiblePlaylist;              //@synthesize visiblePlaylist=_visiblePlaylist - In the implementation block
@property (getter=isCuratorPlaylist,nonatomic,copy) NSNumber * curatorPlaylist;              //@synthesize curatorPlaylist=_curatorPlaylist - In the implementation block
@property (nonatomic,copy) NSNumber * isOwner;                                               //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,copy) NSString * authorStoreIdentifier;                                 //@synthesize authorStoreIdentifier=_authorStoreIdentifier - In the implementation block
@property (nonatomic,retain) MPModelPlaylist * parentPlaylist;                               //@synthesize parentPlaylist=_parentPlaylist - In the implementation block
@property (assign,nonatomic) BOOL shouldCreatePlaylist;                                      //@synthesize shouldCreatePlaylist=_shouldCreatePlaylist - In the implementation block
@property (nonatomic,retain) MPModelPlaylist * playlist;                                     //@synthesize playlist=_playlist - In the implementation block
+(id)requiredPlaylistEntryProperties;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)isOwner;
-(NSString *)playlistName;
-(void)setPlaylistName:(NSString *)arg1 ;
-(MPModelPlaylist *)playlist;
-(void)setPlaylist:(MPModelPlaylist *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)setPlaylistUserImage:(UIImage *)arg1 ;
-(id)newOperationWithLocalPersistenceResponseHandler:(/*^block*/id)arg1 completeResponseHandler:(/*^block*/id)arg2 ;
-(MPSectionedCollection *)playlistEntries;
-(void)setPlaylistEntries:(MPSectionedCollection *)arg1 ;
-(NSString *)playlistDescription;
-(void)setPlaylistDescription:(NSString *)arg1 ;
-(UIImage *)playlistUserImage;
-(id)isPublicPlaylist;
-(void)setPublicPlaylist:(NSNumber *)arg1 ;
-(id)isVisiblePlaylist;
-(void)setVisiblePlaylist:(NSNumber *)arg1 ;
-(id)isCuratorPlaylist;
-(void)setCuratorPlaylist:(NSNumber *)arg1 ;
-(void)setIsOwner:(NSNumber *)arg1 ;
-(NSString *)authorStoreIdentifier;
-(void)setAuthorStoreIdentifier:(NSString *)arg1 ;
-(MPModelPlaylist *)parentPlaylist;
-(void)setParentPlaylist:(MPModelPlaylist *)arg1 ;
-(BOOL)shouldCreatePlaylist;
-(void)setShouldCreatePlaylist:(BOOL)arg1 ;
-(BOOL)didSetPlaylistUserImage;
@end

