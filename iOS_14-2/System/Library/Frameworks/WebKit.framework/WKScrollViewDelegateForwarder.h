/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class WKWebView, NSString;

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

	WKWebView* _internalDelegate;
	WeakObjCPtr<id<UIScrollViewDelegate> > _externalDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

