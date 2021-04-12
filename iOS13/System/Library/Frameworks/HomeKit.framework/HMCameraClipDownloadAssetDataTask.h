/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol HMCameraClipDownloadAssetDataTaskHandling;
#import <HomeKit/HomeKit-Structs.h>
@class NSMutableURLRequest;

@interface HMCameraClipDownloadAssetDataTask : NSObject {

	NSMutableURLRequest* _urlRequest;
	id<HMCameraClipDownloadAssetDataTaskHandling> _handler;

}

@property (readonly) NSMutableURLRequest * urlRequest;                                   //@synthesize urlRequest=_urlRequest - In the implementation block
@property (readonly) id<HMCameraClipDownloadAssetDataTaskHandling> handler;              //@synthesize handler=_handler - In the implementation block
-(id<HMCameraClipDownloadAssetDataTaskHandling>)handler;
-(NSMutableURLRequest *)urlRequest;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
-(id)downloadDataForByteRange:(NSRange)arg1 ;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3 ;
@end

