/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

