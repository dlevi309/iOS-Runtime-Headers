/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHAssetResourceRequestDelegate.h>

@class NSMutableDictionary, NSString;

@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate> {

	Ai _nextRequestID;
	NSMutableDictionary* _requestsByID;
	os_unfair_lock_s _lock;
	unsigned long long _managerID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(unsigned long long)_nextManagerID;
-(id)init;
-(void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2 ;
-(void)assetResourceRequestDidFinish:(id)arg1 ;
-(int)_nextRequestID;
-(int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelDataRequest:(int)arg1 ;
-(int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)infoForRequest:(int)arg1 ;
-(id)consolidateAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)reconnectAssets:(id)arg1 urlResolvingHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_autoResolveReferencedResources:(id)arg1 folderURL:(id)arg2 resourceClient:(id)arg3 ;
@end

