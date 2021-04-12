/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask {

	CPLProxyLibraryManager* _proxyLibraryManager;

}

@property (nonatomic,retain) CPLProxyLibraryManager * proxyLibraryManager;              //@synthesize proxyLibraryManager=_proxyLibraryManager - In the implementation block
-(void)cancelTask;
-(void)setProxyLibraryManager:(CPLProxyLibraryManager *)arg1 ;
-(CPLProxyLibraryManager *)proxyLibraryManager;
@end

