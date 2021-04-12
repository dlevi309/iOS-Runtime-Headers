/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelResponse.h>
#import <libobjc.A.dylib/MPMediaDownloadObserver.h>

@class NSString;

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse <MPMediaDownloadObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 ;
-(void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3 ;
-(void)dealloc;
@end

