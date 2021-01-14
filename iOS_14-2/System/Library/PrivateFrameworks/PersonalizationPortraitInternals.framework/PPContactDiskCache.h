/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString;

@interface PPContactDiskCache : NSObject {

	long long _lastCreatedAt;
	NSString* _path;

}
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(id)path;
-(id)_cacheObjectFromFilePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEmpty;
-(BOOL)iterNameRecordCacheWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end

