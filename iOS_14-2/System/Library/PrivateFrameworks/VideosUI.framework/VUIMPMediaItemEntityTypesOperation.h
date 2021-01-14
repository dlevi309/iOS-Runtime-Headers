/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(BOOL)_mediaLibraryHasEpisodes;
-(BOOL)_mediaLibraryHasHasHomeVideos;
-(BOOL)_mediaLibraryHasMovies;
-(BOOL)_mediaLibraryHasMovieRentals;
-(BOOL)_mediaLibraryHasLocalMediaItems;
-(BOOL)_canUseCheapEntityCheckWithMediaEntityType:(id)arg1 ;
-(BOOL)_mediaLibraryHasMediaItemsWithQuery:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 ;
@end

