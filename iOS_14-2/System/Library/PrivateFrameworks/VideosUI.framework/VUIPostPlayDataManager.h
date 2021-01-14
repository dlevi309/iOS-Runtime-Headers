/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIPostPlayDataManager : NSObject
+(void)fetchPostPlayItemForCurrentMediaItem:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_fetchPostPlayItemFromJSForSeriesCanonicalID:(id)arg1 andVideoCanonicalID:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_fetchContentFromLibraryForCurrentMediaItem:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_generateMediaItemFromJSResponse:(id)arg1 canAutoPlay:(BOOL)arg2 ;
+(void)_fetchPostPlayItemFromLibraryContentForStoreID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

