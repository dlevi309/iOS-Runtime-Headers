/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString;

@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate> {

	CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>* _completionHandler;
	RefPtr<const WebKit::SafeBrowsingWarning, WTF::DumbPtrTraits<const WebKit::SafeBrowsingWarning> >* _warning;
	WeakObjCPtr<WKSafeBrowsingTextView> _details;
	WeakObjCPtr<WKSafeBrowsingBox> _box;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateContentSize;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithFrame:(CGRect)arg1 safeBrowsingWarning:(const SafeBrowsingWarning*)arg2 completionHandler:(CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>*)arg3 ;
-(BOOL)forMainFrameNavigation;
-(void)showDetailsClicked;
-(void)goBackClicked;
-(void)layoutText;
-(void)clickedOnLink:(id)arg1 ;
-(void)addContent;
@end

