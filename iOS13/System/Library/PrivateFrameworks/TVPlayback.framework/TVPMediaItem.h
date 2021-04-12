/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPMediaItem <NSObject,TVPMediaItemReporting>
@optional
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1;
-(void)prepareForPlaybackInitiationWithCompletion:(/*^block*/id)arg1;
-(id)replacementErrorForPlaybackError:(id)arg1;
-(BOOL)shouldRetryPlaybackForError:(id)arg1;
-(void)loadStreamingKeyForRequest:(id)arg1;
-(BOOL)loadResourceForRequest:(id)arg1;
-(void)cleanUpMediaItem;

@required
-(id)mediaItemURL;
-(id)mediaItemMetadataForProperty:(id)arg1;
-(BOOL)isEqualToMediaItem:(id)arg1;
-(BOOL)hasTrait:(id)arg1;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1;
-(void)removeMediaItemMetadataForProperty:(id)arg1;

@end

