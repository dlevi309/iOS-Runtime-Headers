/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLForceSyncTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyForceSyncTask : CPLForceSyncTask {

	CPLProxyLibraryManager* _proxyLibraryManager;

}

@property (nonatomic,retain) CPLProxyLibraryManager * proxyLibraryManager;              //@synthesize proxyLibraryManager=_proxyLibraryManager - In the implementation block
-(void)cancelTask;
-(void)setProxyLibraryManager:(CPLProxyLibraryManager *)arg1 ;
-(CPLProxyLibraryManager *)proxyLibraryManager;
@end

