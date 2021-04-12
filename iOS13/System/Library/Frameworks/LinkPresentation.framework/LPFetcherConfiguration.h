/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WKWebView;

@interface LPFetcherConfiguration : NSObject <NSCopying> {

	WKWebView* _webViewForProcessSharing;
	long long _maximumResponseCount;

}

@property (nonatomic,retain) WKWebView * webViewForProcessSharing;              //@synthesize webViewForProcessSharing=_webViewForProcessSharing - In the implementation block
@property (assign,nonatomic) long long maximumResponseCount;                    //@synthesize maximumResponseCount=_maximumResponseCount - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWebViewForProcessSharing:(WKWebView *)arg1 ;
-(WKWebView *)webViewForProcessSharing;
-(long long)maximumResponseCount;
-(void)setMaximumResponseCount:(long long)arg1 ;
@end

