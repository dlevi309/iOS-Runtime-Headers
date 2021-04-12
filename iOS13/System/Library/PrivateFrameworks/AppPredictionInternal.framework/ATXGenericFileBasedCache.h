/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString;

@interface ATXGenericFileBasedCache : NSObject {

	NSString* _cacheFilePath;

}
-(id)init;
-(BOOL)storeData:(id)arg1 ;
-(void)readWithMaxValidAge:(double)arg1 unlink:(BOOL)arg2 cacheDataOut:(id*)arg3 cacheAgeOut:(double*)arg4 ;
-(id)initWithCacheFilePath:(id)arg1 ;
@end

