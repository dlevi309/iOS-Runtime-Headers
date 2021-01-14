/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKObservablePageState.h>

@class NSString, NSURL;

@interface WKObservablePageState : NSObject <_WKObservablePageState> {

	RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >* _page;
	unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver> >* _observer;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,readonly) BOOL _webProcessIsResponsive; 
@property (nonatomic,readonly) NSURL * unreachableURL; 
@property (nonatomic,readonly) SecTrustRef serverTrust; 
-(SecTrustRef)serverTrust;
-(BOOL)isLoading;
-(NSURL *)URL;
-(NSURL *)unreachableURL;
-(double)estimatedProgress;
-(BOOL)hasOnlySecureContent;
-(BOOL)_webProcessIsResponsive;
-(id)initWithPage:(RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >*)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

