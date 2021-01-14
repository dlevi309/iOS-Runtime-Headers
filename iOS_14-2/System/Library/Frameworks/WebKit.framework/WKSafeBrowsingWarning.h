/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 safeBrowsingWarning:(const SafeBrowsingWarning*)arg2 completionHandler:(CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>*)arg3 ;
-(BOOL)forMainFrameNavigation;
-(void)goBackClicked;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)addContent;
-(void)showDetailsClicked;
-(void)clickedOnLink:(id)arg1 ;
-(void)updateContentSize;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)layoutText;
-(void)dealloc;
@end

