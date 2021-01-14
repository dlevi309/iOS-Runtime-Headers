/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPStreamDataStorage.h>
#import <TSPersistence/TSPDocumentResourceDataStorageInfo.h>

@protocol TSPDocumentResourceBundleProviderTSUResourceRequest;
@class TSPDocumentResourceInfo, TSUOnce, NSDataAsset, NSString;

@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDocumentResourceDataStorageInfo> {

	id<TSPDocumentResourceBundleProvider><TSUResourceRequest> _resourceRequest;
	TSPDocumentResourceInfo* _documentResourceInfo;
	TSUOnce* _dataAssetOnceToken;
	NSDataAsset* _dataAsset;

}

@property (nonatomic,readonly) NSDataAsset * dataAsset; 
@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isReadable;
-(id)init;
-(unsigned long long)encodedLength;
-(unsigned long long)length;
-(id)fallbackColor;
-(BOOL)needsDownload;
-(CGSize)pixelSize;
-(id<TSUResourceRequest>)resourceRequest;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)NSDataWithOptions:(unsigned long long)arg1 ;
-(id)documentResourceLocator;
-(TSPDocumentResourceInfo *)documentResourceInfo;
-(id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2 ;
-(BOOL)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSDataAsset *)dataAsset;
@end

