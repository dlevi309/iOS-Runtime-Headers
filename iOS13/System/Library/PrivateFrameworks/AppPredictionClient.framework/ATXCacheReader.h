/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_source;
@class _PASLock, NSString, NSObject;

@interface ATXCacheReader : NSObject {

	_PASLock* _lock;
	NSString* _cacheBasePath;
	NSObject*<OS_dispatch_source> _vnodeSource;

}
-(id)init;
-(void)dealloc;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)readCacheFileForConsumerSubtype:(unsigned char)arg1 ;
-(id)readCacheFileForFilename:(id)arg1 ;
-(id)readCacheFileForCachePath:(id)arg1 ;
-(void)_handleDirChange;
@end

