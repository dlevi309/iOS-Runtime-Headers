/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSString, MPMediaLibrary;

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation {

	BOOL _shouldLibraryAdd;
	NSString* _globalPlaylistID;
	MPMediaLibrary* _mediaLibrary;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * globalPlaylistID;                  //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                      //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
@property (nonatomic,copy) id responseHandler;                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
@end

