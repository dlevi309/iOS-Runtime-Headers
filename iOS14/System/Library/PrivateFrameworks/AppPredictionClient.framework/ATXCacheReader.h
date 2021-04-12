/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_source;
@class _PASLock, NSString, NSObject;

@interface ATXCacheReader : NSObject {

	_PASLock* _lock;
	NSString* _cacheBasePath;
	NSObject*<OS_dispatch_source> _vnodeSource;

}
-(void)_handleDirChange;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)init;
-(id)readCacheFileForCachePath:(id)arg1 ;
-(id)readCacheFileForConsumerSubtype:(unsigned char)arg1 ;
-(void)dealloc;
@end

