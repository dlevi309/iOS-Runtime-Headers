/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class WKProcessPool, NSCache;

@interface MKWebViewFactory : NSObject {

	WKProcessPool* _processPool;
	NSCache* _webViewCache;

}
+(id)sharedWebViewFactory;
-(id)init;
-(void)requeueItem:(id)arg1 ;
-(id)dequeueItemWithBridgeConfiguration:(id)arg1 ;
@end

