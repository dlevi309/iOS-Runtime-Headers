/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@interface CPSImageStore : NSObject
+(id)keyForImageURL:(id)arg1 error:(id*)arg2 ;
+(id)_storeDirectoryURL:(id*)arg1 ;
+(id)keyForMapsCategoryID:(id)arg1 error:(id*)arg2 ;
+(id)keyForGEOStyleAttributes:(id)arg1 error:(id*)arg2 ;
+(id)keyForPOIMuid:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)storeImageData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)_purgeOldFilesInDirectory:(id)arg1 timeToLive:(double)arg2 ;
-(id)storedImageForKey:(id)arg1 ;
-(void)purgeOldImagesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)test_purgeOldFilesInDirectory:(id)arg1 timeToLive:(double)arg2 ;
@end

