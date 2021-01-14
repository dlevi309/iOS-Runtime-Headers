/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@protocol OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCache, NSObject;

@interface CPBitmapStore : NSObject {

	NSString* _path;
	NSString* _imagePath;
	NSCache* _cache;
	int _version;
	NSString* _versionPath;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
	BOOL _lockOnRead;

}

@property (nonatomic,readonly) int version; 
@property (assign,nonatomic) BOOL lockOnRead;                                //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
-(BOOL)lockOnRead;
-(unsigned long long)cacheItemLimit;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)commitTransaction;
-(id)_versionPath;
-(id)initWithPath:(id)arg1 version:(int)arg2 ;
-(void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(CGImageRef)arg4 ;
-(id)allGroups;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(id)imagePath;
-(int)setVersion:(int)arg1 ;
-(unsigned long long)imageCount;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)commitTxn;
-(int)version;
-(void)purge;
-(void)setLockOnRead:(BOOL)arg1 ;
-(void)dealloc;
-(id)cacheNumberForKey:(id)arg1 ;
-(id)imageNameForKey:(id)arg1 inGroup:(id)arg2 ;
-(BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(unsigned)memContentOffset;
-(CGImageRef)copyImageForKey:(id)arg1 ;
-(BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(CGImageRef)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 draw:(/*^block*/id)arg6 ;
-(CGImageRef)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 scale:(double)arg5 fillMem:(/*^block*/id)arg6 alternateCompletion:(/*^block*/id)arg7 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 formatColor:(CGColorRef)arg5 scale:(double)arg6 data:(id)arg7 ;
-(void)removeImagesInGroups:(id)arg1 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6 ;
-(void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 scale:(double)arg5 data:(id)arg6 ;
@end

