/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(ICCache *)imageCache;
-(void)setImageCache:(ICCache *)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(void)removeImageForKey:(id)arg1 ;
-(void)removeAllImages;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)setMemoryWarningEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryWarningEventSource;
-(void)receivedMemoryWarning;
-(ICLRUCache *)bigImageCache;
-(void)setBigImageCache:(ICLRUCache *)arg1 ;
@end

