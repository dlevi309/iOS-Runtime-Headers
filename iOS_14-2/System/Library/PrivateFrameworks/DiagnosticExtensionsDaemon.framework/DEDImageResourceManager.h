/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@class ResourceLoader, NSMutableDictionary;

@interface DEDImageResourceManager : NSObject {

	ResourceLoader* _loader;
	NSMutableDictionary* _imageCache;

}

@property (retain) ResourceLoader * loader;                       //@synthesize loader=_loader - In the implementation block
@property (retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(ResourceLoader *)loader;
-(void)setLoader:(ResourceLoader *)arg1 ;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)cachedImageFromKey:(id)arg1 ;
@end

