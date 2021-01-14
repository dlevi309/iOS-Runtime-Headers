/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@class ADWebView;

@interface ADWebViewManager : NSObject {

	ADWebView* _preallocatedWebView;

}

@property (nonatomic,retain) ADWebView * preallocatedWebView;              //@synthesize preallocatedWebView=_preallocatedWebView - In the implementation block
+(id)sharedManager;
-(ADWebView *)preallocatedWebView;
-(id)creativeView;
-(void)preallocateWebViewWithBackgroundPriority;
-(id)_webViewForCreativeForVideo;
-(void)setPreallocatedWebView:(ADWebView *)arg1 ;
-(id)creativeViewForVideo;
-(id)_webViewForCreative;
@end

