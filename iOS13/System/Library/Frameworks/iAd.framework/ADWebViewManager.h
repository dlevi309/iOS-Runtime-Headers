/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@class ADWebView;

@interface ADWebViewManager : NSObject {

	ADWebView* _preallocatedWebView;

}

@property (nonatomic,retain) ADWebView * preallocatedWebView;              //@synthesize preallocatedWebView=_preallocatedWebView - In the implementation block
+(id)sharedManager;
-(void)preallocateWebViewWithBackgroundPriority;
-(id)creativeView;
-(ADWebView *)preallocatedWebView;
-(void)setPreallocatedWebView:(ADWebView *)arg1 ;
-(id)_webViewForCreative;
-(id)_webViewForCreativeForVideo;
-(id)creativeViewForVideo;
@end

