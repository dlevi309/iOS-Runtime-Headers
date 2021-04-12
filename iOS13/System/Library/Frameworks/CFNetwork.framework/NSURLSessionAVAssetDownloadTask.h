/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(unsigned long long)AVAssetDownloadToken;
@end

