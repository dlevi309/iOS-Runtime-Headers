/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSString;

@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate> {

	RetainPtr<NSURL>* _temporaryFileShareDirectory;
	WeakObjCPtr<WKWebView> _webView;
	WeakObjCPtr<id<WKShareSheetDelegate> > _delegate;
	CompletionHandler<void (bool)>* _completionHandler;
	RetainPtr<UIActivityViewController>* _shareSheetViewController;
	RetainPtr<UIViewController>* _presentationViewController;
	BOOL _didShareSuccessfully;

}

@property (assign,nonatomic,__weak) id<WKShareSheetDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTemporarySharingDirectory;
+(id)writeFileToShareableURL:(id)arg1 data:(id)arg2 temporaryDirectory:(id)arg3 ;
+(id)createRandomSharingDirectoryForFile:(id)arg1 ;
-(id<WKShareSheetDelegate>)delegate;
-(void)setDelegate:(id<WKShareSheetDelegate>)arg1 ;
-(void)presentWithShareDataArray:(id)arg1 inRect:(Optional<WebCore::FloatRect>)arg2 ;
-(void)presentWithParameters:(const ShareDataWithParsedURL*)arg1 inRect:(Optional<WebCore::FloatRect>)arg2 completionHandler:(CompletionHandler<void (bool)>*)arg3 ;
-(id)initWithView:(id)arg1 ;
-(void)dismiss;
@end

