/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)downloadDataForByteRange:(NSRange)arg1 ;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3 ;
-(NSMutableURLRequest *)urlRequest;
-(id<HMCameraClipDownloadAssetDataTaskHandling>)handler;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
@end

