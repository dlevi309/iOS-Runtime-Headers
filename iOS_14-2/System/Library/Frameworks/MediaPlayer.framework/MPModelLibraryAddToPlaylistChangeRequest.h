/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlaylist, MPModelObject, MPSectionedCollection;

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject <NSCopying> {

	MPModelPlaylist* _playlist;
	MPModelObject* _representativeModelObject;
	MPModelObject* _referralObject;
	MPSectionedCollection* _songResults;
	/*^block*/id _storeImportAllowedHandler;

}

@property (nonatomic,retain) MPModelPlaylist * playlist;                             //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MPModelObject * representativeModelObject;              //@synthesize representativeModelObject=_representativeModelObject - In the implementation block
@property (nonatomic,retain) MPModelObject * referralObject;                         //@synthesize referralObject=_referralObject - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * songResults;                    //@synthesize songResults=_songResults - In the implementation block
@property (nonatomic,copy) id storeImportAllowedHandler;                             //@synthesize storeImportAllowedHandler=_storeImportAllowedHandler - In the implementation block
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelPlaylist *)playlist;
-(MPSectionedCollection *)songResults;
-(void)setPlaylist:(MPModelPlaylist *)arg1 ;
-(MPModelObject *)representativeModelObject;
-(void)setRepresentativeModelObject:(MPModelObject *)arg1 ;
-(MPModelObject *)referralObject;
-(void)setReferralObject:(MPModelObject *)arg1 ;
-(void)setSongResults:(MPSectionedCollection *)arg1 ;
-(id)storeImportAllowedHandler;
-(void)setStoreImportAllowedHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

