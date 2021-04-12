/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPFileDataStorage.h>
#import <TSPersistence/TSPDocumentResourceDataStorageInfo.h>

@protocol TSUResourceFileURLProviderTSUResourceRequest;
@class TSPDocumentResourceInfo, NSString;

@interface TSPDocumentResourceFileDataStorage : TSPFileDataStorage <TSPDocumentResourceDataStorageInfo> {

	id<TSUResourceFileURLProvider><TSUResourceRequest> _resourceRequest;
	TSPDocumentResourceInfo* _documentResourceInfo;

}

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
-(id)downloadProgress;
-(id)fileURL;
-(id)fallbackColor;
-(BOOL)needsDownload;
-(CGSize)pixelSize;
-(id<TSUResourceRequest>)resourceRequest;
-(id)documentResourceLocator;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(TSPDocumentResourceInfo *)documentResourceInfo;
-(id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2 ;
-(BOOL)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

