/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol OS_dispatch_source;
@class ICCache, ICLRUCache, NSObject;

@interface ICImageCache : NSObject {

	ICCache* _imageCache;
	ICLRUCache* _bigImageCache;
	NSObject*<OS_dispatch_source> _memoryWarningEventSource;

}

@property (nonatomic,retain) ICCache * imageCache;                                                //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ICLRUCache * bigImageCache;                                          //@synthesize bigImageCache=_bigImageCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningEventSource;              //@synthesize memoryWarningEventSource=_memoryWarningEventSource - In the implementation block
+(double)bigImageSize;
+(unsigned long long)maxBigImageCount;
-(id)init;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(ICCache *)imageCache;
-(void)setImageCache:(ICCache *)arg1 ;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)setMemoryWarningEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryWarningEventSource;
-(void)receivedMemoryWarning;
-(void)removeAllImages;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(ICLRUCache *)bigImageCache;
-(void)setBigImageCache:(ICLRUCache *)arg1 ;
@end

