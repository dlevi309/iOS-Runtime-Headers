/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScaleManager.h>

@protocol SWScaleManager <NSObject>
@property (assign,nonatomic) double scale; 
@required
-(double)scale;
-(void)setScale:(double)arg1;

@end


@class WKWebView, NSString;

@interface SWScaleManager : NSObject <SWScaleManager> {

	double _scale;
	WKWebView* _webView;

}

@property (nonatomic,readonly) WKWebView * webView;                 //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)initWithWebView:(id)arg1 scale:(double)arg2 ;
@end

