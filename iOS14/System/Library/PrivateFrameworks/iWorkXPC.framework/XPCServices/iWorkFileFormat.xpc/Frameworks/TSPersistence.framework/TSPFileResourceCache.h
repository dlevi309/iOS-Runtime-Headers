/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSUResourceCache.h>
#import <TSPersistence/TSUResourceFileURLProvider.h>

@class NSOperationQueue, NSURL, NSString;

@interface TSPFileResourceCache : NSObject <TSUResourceCache, TSUResourceFileURLProvider> {

	NSOperationQueue* _ioOperationQueue;
	NSURL* _cacheURL;

}

@property (nonatomic,readonly) NSURL * cacheURL;                    //@synthesize cacheURL=_cacheURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheDirectoryURLWithSignature:(id)arg1 sharedGroupContainer:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)description;
-(NSURL *)cacheURL;
-(void)purge;
-(id)fileURLForResourceInfo:(id)arg1 ;
-(void)cacheResourceAtURL:(id)arg1 forInfo:(id)arg2 copy:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)fileURLInCacheForResourceInfo:(id)arg1 ;
-(BOOL)cachedResourceExistsForInfo:(id)arg1 ;
@end

