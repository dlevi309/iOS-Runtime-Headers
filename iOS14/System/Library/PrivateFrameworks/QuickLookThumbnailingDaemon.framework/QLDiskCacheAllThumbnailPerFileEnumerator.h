/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <QuickLookThumbnailingDaemon/QLDiskCacheEnumerator.h>

@class QLCacheFileIdentifier, QLCacheIndexDatabaseQueryEnumerator, QLCacheThumbnailData, NSData, QLCacheBlobInfo;

@interface QLDiskCacheAllThumbnailPerFileEnumerator : QLDiskCacheEnumerator {

	QLCacheFileIdentifier* _fileIdentifier;
	QLCacheIndexDatabaseQueryEnumerator* _cacheIndexDatabaseEnumerator;
	QLCacheThumbnailData* _thumbnailData;
	NSData* _bitmapData;
	QLCacheBlobInfo* _bitmapDataBlobInfo;
	NSData* _metadata;
	QLCacheBlobInfo* _metadataBlobInfo;

}
-(void)_createNewCacheIndexDatabaseEnumeratorWithFileIdentifier:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 fileIdentifier:(id)arg2 ;
-(id)nextThumbnailData;
@end

