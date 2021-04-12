/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryMediaItem_iOS.h>

@class HSHomeSharingLibrary, NSURL, NSString;

@interface VUIHomeSharingMediaItem_iOS : VUILibraryMediaItem_iOS {

	BOOL _needsKeyBagSyncPriorToPlayback;
	HSHomeSharingLibrary* _homeSharingLibrary;
	NSURL* _mediaItemURLInternal;
	NSString* _keyBagFilePath;
	unsigned long long _loadingContext;

}

@property (nonatomic,retain) HSHomeSharingLibrary * homeSharingLibrary;              //@synthesize homeSharingLibrary=_homeSharingLibrary - In the implementation block
@property (nonatomic,retain) NSURL * mediaItemURLInternal;                           //@synthesize mediaItemURLInternal=_mediaItemURLInternal - In the implementation block
@property (nonatomic,retain) NSString * keyBagFilePath;                              //@synthesize keyBagFilePath=_keyBagFilePath - In the implementation block
@property (assign,nonatomic) BOOL needsKeyBagSyncPriorToPlayback;                    //@synthesize needsKeyBagSyncPriorToPlayback=_needsKeyBagSyncPriorToPlayback - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;                      //@synthesize loadingContext=_loadingContext - In the implementation block
+(void)initialize;
-(id)imageLoader;
-(HSHomeSharingLibrary *)homeSharingLibrary;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(id)initWithMPMediaItem:(id)arg1 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(NSURL *)mediaItemURLInternal;
-(void)setMediaItemURLInternal:(NSURL *)arg1 ;
-(NSString *)keyBagFilePath;
-(BOOL)needsKeyBagSyncPriorToPlayback;
-(void)setNeedsKeyBagSyncPriorToPlayback:(BOOL)arg1 ;
-(BOOL)_loadingCancelled:(unsigned long long)arg1 ;
-(void)_fetchKeybagForDSID:(id)arg1 isFamilyAccount:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(BOOL)shouldRetryPlaybackForError:(id)arg1 ;
-(void)setHomeSharingLibrary:(HSHomeSharingLibrary *)arg1 ;
-(void)setKeyBagFilePath:(NSString *)arg1 ;
@end

