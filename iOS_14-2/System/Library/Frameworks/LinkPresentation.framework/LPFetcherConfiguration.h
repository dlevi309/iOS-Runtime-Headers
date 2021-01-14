/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WKWebView, LPEvent;

@interface LPFetcherConfiguration : NSObject <NSCopying> {

	WKWebView* _webViewForProcessSharing;
	long long _maximumResponseCount;
	LPEvent* _rootEvent;

}

@property (nonatomic,retain) WKWebView * webViewForProcessSharing;              //@synthesize webViewForProcessSharing=_webViewForProcessSharing - In the implementation block
@property (assign,nonatomic) long long maximumResponseCount;                    //@synthesize maximumResponseCount=_maximumResponseCount - In the implementation block
@property (nonatomic,retain) LPEvent * rootEvent;                               //@synthesize rootEvent=_rootEvent - In the implementation block
-(void)setWebViewForProcessSharing:(WKWebView *)arg1 ;
-(void)setRootEvent:(LPEvent *)arg1 ;
-(LPEvent *)rootEvent;
-(WKWebView *)webViewForProcessSharing;
-(long long)maximumResponseCount;
-(void)setMaximumResponseCount:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

