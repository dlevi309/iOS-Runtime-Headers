/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <QuickLookThumbnailingDaemon/QLDiskCacheEnumerator.h>

@class QLCacheIndexDatabaseFileInfoEnumerator;

@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator {

	BOOL _extraInfo;
	BOOL _ubiquitous;
	QLCacheIndexDatabaseFileInfoEnumerator* _indexEnumerator;

}
-(id)initWithDiskCache:(id)arg1 forUbiquitousFiles:(BOOL)arg2 extraInfo:(BOOL)arg3 ;
-(id)nextFileInfo;
@end

