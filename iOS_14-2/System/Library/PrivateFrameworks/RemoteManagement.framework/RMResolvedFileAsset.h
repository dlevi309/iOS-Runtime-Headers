/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

