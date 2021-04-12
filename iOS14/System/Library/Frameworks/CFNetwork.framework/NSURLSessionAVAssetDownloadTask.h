/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTask.h>

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {

	unsigned long long _AVAssetDownloadToken;

}

@property (readonly) unsigned long long AVAssetDownloadToken;              //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSURL * destinationURL; 
-(NSURL *)destinationURL;
-(NSURL *)URL;
-(unsigned long long)AVAssetDownloadToken;
@end

