/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NMSModelRecommendationsLibraryRequest;

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation {

	NMSModelRecommendationsLibraryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NMSModelRecommendationsLibraryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(NMSModelRecommendationsLibraryRequest *)arg1 ;
-(id)responseHandler;
-(NMSModelRecommendationsLibraryRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(void)_requestPlaylistsEntries;
-(void)_requestSongs;
-(void)_requestAlbums;
-(void)_requestPlaylists;
-(id)_mpIdentifierSetsFromStringIdentifiers:(id)arg1 ;
-(void)_requestContainerWithClass:(Class)arg1 ;
-(id)_modelObjectWithCachedArtworkFromModelObject:(id)arg1 ;
@end

