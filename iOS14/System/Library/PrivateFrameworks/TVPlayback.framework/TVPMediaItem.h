/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPMediaItem <NSObject,TVPMediaItemReporting>
@optional
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1;
-(void)cleanUpMediaItem;
-(BOOL)shouldRetryPlaybackForError:(id)arg1;
-(void)prepareForPlaybackInitiationWithCompletion:(/*^block*/id)arg1;
-(id)replacementErrorForPlaybackError:(id)arg1;
-(void)loadStreamingKeyForRequest:(id)arg1;
-(BOOL)loadResourceForRequest:(id)arg1;

@required
-(id)mediaItemMetadataForProperty:(id)arg1;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1;
-(BOOL)isEqualToMediaItem:(id)arg1;
-(void)removeMediaItemMetadataForProperty:(id)arg1;

@end

