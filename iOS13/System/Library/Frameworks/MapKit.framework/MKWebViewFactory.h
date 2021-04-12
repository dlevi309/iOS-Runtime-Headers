/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

