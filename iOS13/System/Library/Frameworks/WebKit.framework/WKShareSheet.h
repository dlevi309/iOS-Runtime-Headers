/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKShareSheet : NSObject {

	WeakObjCPtr<WKWebView> _webView;
	WeakObjCPtr<id<WKShareSheetDelegate> > _delegate;
	CompletionHandler<void (bool)>* _completionHandler;
	RetainPtr<UIActivityViewController>* _shareSheetViewController;
	RetainPtr<UIViewController>* _presentationViewController;

}

@property (assign,nonatomic,__weak) id<WKShareSheetDelegate> delegate; 
-(id<WKShareSheetDelegate>)delegate;
-(void)setDelegate:(id<WKShareSheetDelegate>)arg1 ;
-(void)dismiss;
-(id)initWithView:(id)arg1 ;
-(void)presentWithParameters:(const ShareDataWithParsedURL*)arg1 inRect:(Optional<WebCore::FloatRect>)arg2 completionHandler:(CompletionHandler<void (bool)>*)arg3 ;
-(void)_didCompleteWithSuccess:(BOOL)arg1 ;
-(void)dispatchDidDismiss;
@end

