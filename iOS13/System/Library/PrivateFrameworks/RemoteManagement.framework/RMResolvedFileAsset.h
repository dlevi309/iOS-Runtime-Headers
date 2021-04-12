/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <RemoteManagement/RMResolvedAsset.h>

@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset {

	NSURL* _downloadedURL;

}

@property (nonatomic,readonly) NSURL * downloadedURL;              //@synthesize downloadedURL=_downloadedURL - In the implementation block
-(id)initWithAsset:(id)arg1 downloadedURL:(id)arg2 error:(id)arg3 ;
-(NSURL *)downloadedURL;
@end

