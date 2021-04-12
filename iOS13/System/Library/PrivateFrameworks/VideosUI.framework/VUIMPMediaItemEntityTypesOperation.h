/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, NSError, MPMediaLibrary;

@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation {

	VUIMediaItemEntityTypesFetchResponse* _response;
	NSError* _error;
	MPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)executionDidBegin;
-(BOOL)_mediaLibraryHasEpisodes;
-(BOOL)_mediaLibraryHasHasHomeVideos;
-(BOOL)_mediaLibraryHasMovies;
-(BOOL)_mediaLibraryHasMovieRentals;
-(BOOL)_mediaLibraryHasLocalMediaItems;
-(BOOL)_canUseCheapEntityCheckWithMediaEntityType:(id)arg1 ;
-(BOOL)_mediaLibraryHasMediaItemsWithQuery:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 ;
@end

