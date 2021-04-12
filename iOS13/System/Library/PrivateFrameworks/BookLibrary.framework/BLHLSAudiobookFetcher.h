/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject {

	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
+(id)preferredStreamFromMasterPlaylist:(id)arg1 ;
-(NSURLSession *)session;
-(id)initCanUseCellularData:(BOOL)arg1 powerRequired:(BOOL)arg2 ;
-(id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

