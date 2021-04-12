/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/VUICoreImageLoader.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSMutableDictionary, NSObject, NSString;

@interface VUIURLImageLoader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, VUICoreImageLoader> {

	BOOL _imageRotationEnabled;
	NSURLSession* _session;
	NSMutableDictionary* _loadOptionsByID;
	NSMutableDictionary* _loadIDsByURL;
	NSMutableDictionary* _taskOptionsByURL;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) NSURLSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loadOptionsByID;                              //@synthesize loadOptionsByID=_loadOptionsByID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loadIDsByURL;                                 //@synthesize loadIDsByURL=_loadIDsByURL - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * taskOptionsByURL;                             //@synthesize taskOptionsByURL=_taskOptionsByURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;                       //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,getter=isImageRotationEnabled,nonatomic) BOOL imageRotationEnabled;              //@synthesize imageRotationEnabled=_imageRotationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURLSession *)session;
-(id)URLForObject:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSMutableDictionary *)loadOptionsByID;
-(NSMutableDictionary *)loadIDsByURL;
-(NSMutableDictionary *)taskOptionsByURL;
-(void)_executeOnProcessingQueue:(/*^block*/id)arg1 ;
-(BOOL)isImageRotationEnabled;
-(void)setImageRotationEnabled:(BOOL)arg1 ;
@end

