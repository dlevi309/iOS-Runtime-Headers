/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject {

	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
+(id)preferredStreamFromMasterPlaylist:(id)arg1 ;
-(NSURLSession *)session;
-(id)initCanUseCellularData:(BOOL)arg1 powerRequired:(BOOL)arg2 bundleID:(id)arg3 ;
-(id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

