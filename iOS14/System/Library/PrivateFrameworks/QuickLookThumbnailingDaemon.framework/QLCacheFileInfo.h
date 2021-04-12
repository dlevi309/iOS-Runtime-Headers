/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@class QLCacheVersionedFileIdentifier;

@interface QLCacheFileInfo : NSObject {

	float _minSize;
	float _maxSize;
	unsigned long long _cacheId;
	QLCacheVersionedFileIdentifier* _fileIdentifier;
	unsigned long long _thumbnailCount;
	unsigned long long _totalDataLength;

}

@property (nonatomic,readonly) unsigned long long cacheId;                                   //@synthesize cacheId=_cacheId - In the implementation block
@property (nonatomic,readonly) QLCacheVersionedFileIdentifier * fileIdentifier;              //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long thumbnailCount;                            //@synthesize thumbnailCount=_thumbnailCount - In the implementation block
@property (nonatomic,readonly) float minSize;                                                //@synthesize minSize=_minSize - In the implementation block
@property (nonatomic,readonly) float maxSize;                                                //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalDataLength;                           //@synthesize totalDataLength=_totalDataLength - In the implementation block
-(float)minSize;
-(float)maxSize;
-(QLCacheVersionedFileIdentifier *)fileIdentifier;
-(unsigned long long)cacheId;
-(unsigned long long)thumbnailCount;
-(id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2 thumbnailCount:(unsigned long long)arg3 minSize:(float)arg4 maxSize:(float)arg5 totalDataLength:(unsigned long long)arg6 ;
-(id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2 ;
-(unsigned long long)totalDataLength;
@end

