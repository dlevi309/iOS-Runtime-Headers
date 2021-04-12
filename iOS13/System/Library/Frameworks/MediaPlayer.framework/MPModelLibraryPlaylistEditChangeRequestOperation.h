/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryPlaylistEditChangeRequest;

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation {

	MPModelLibraryPlaylistEditChangeRequest* _request;
	/*^block*/id _localPersistenceResponseHandler;
	/*^block*/id _completeResponseHandler;

}

@property (nonatomic,copy) MPModelLibraryPlaylistEditChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id localPersistenceResponseHandler;                             //@synthesize localPersistenceResponseHandler=_localPersistenceResponseHandler - In the implementation block
@property (nonatomic,copy) id completeResponseHandler;                                     //@synthesize completeResponseHandler=_completeResponseHandler - In the implementation block
+(id)requiredPlaylistEntryProperties;
-(void)execute;
-(void)setRequest:(MPModelLibraryPlaylistEditChangeRequest *)arg1 ;
-(MPModelLibraryPlaylistEditChangeRequest *)request;
-(BOOL)_isCloudLibraryEnabled;
-(id)localPersistenceResponseHandler;
-(void)setLocalPersistenceResponseHandler:(id)arg1 ;
-(id)completeResponseHandler;
-(void)setCompleteResponseHandler:(id)arg1 ;
@end

