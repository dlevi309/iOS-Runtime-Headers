/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface PXImportImageCache : NSObject {

	unsigned short _imageFormat;
	NSMutableDictionary* _caches;
	NSObject*<OS_dispatch_queue> _cacheTableQueue;

}
+(id)sharedInstance;
-(void)tearDown;
-(id)init;
-(void)configureWithFormat:(unsigned short)arg1 ;
-(void)setImage:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setImage:(id)arg1 forIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)imageForIdentifer:(id)arg1 ;
-(id)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(BOOL)arg3 foundSize:(unsigned long long*)arg4 ;
-(void)imageForIdentifer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCacheForIdentifiers:(id)arg1 ;
-(void)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)cacheTableForIdentifier:(id)arg1 ;
-(void)accessImageTableForIdentifier:(id)arg1 withChangeBlock:(/*^block*/id)arg2 ;
@end

