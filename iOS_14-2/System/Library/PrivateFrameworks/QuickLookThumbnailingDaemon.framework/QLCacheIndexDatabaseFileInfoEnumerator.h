/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <QuickLookThumbnailingDaemon/QLCacheIndexDatabaseGenericEnumerator.h>

@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator {

	BOOL _extraInfo;
	BOOL _ubiquitous;
	QLCacheVersionedFileIdentifier* _fileIdentifier;

}
-(id)initWithSqliteDatabase:(id)arg1 toEnumerateUbiquitousFiles:(BOOL)arg2 extraInfo:(BOOL)arg3 ;
-(BOOL)nextFileWithCacheId:(unsigned long long*)arg1 versionedFileIdentifier:(id*)arg2 thumbnailCount:(unsigned*)arg3 minSize:(float*)arg4 maxSize:(float*)arg5 totalDataLength:(unsigned long long*)arg6 ;
@end

