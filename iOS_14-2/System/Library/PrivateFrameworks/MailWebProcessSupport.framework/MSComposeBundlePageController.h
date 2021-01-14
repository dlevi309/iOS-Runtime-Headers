/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailWebProcessSupport.framework/MailWebProcessSupport
*/

#import <libobjc.A.dylib/WKWebProcessPlugInLoadDelegate.h>
#import <libobjc.A.dylib/MSBundlePageController.h>
#import <libobjc.A.dylib/MSComposeBodyFieldController.h>

@protocol WKWebProcessPlugIn;
@class NSMutableArray, JSValue, WKWebProcessPlugInBrowserContextController, JSContext, NSString;

@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController> {

	unsigned long long _performOnPageSuspendCount;
	NSMutableArray* _blocksToPerformOnPage;
	JSValue* _jsBodyField;
	id<WKWebProcessPlugIn> _plugIn;
	WKWebProcessPlugInBrowserContextController* _controller;
	JSContext* _jsContext;

}

@property (nonatomic,__weak,readonly) id<WKWebProcessPlugIn> plugIn;                                 //@synthesize plugIn=_plugIn - In the implementation block
@property (nonatomic,readonly) WKWebProcessPlugInBrowserContextController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) JSContext * jsContext;                                                //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,readonly) JSValue * jsBodyField;                                                //@synthesize jsBodyField=_jsBodyField - In the implementation block
@property (nonatomic,readonly) id<MSComposeBodyFieldObserver> observerProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MSComposeBodyFieldObserver>)observerProxy;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(id<WKWebProcessPlugIn>)plugIn;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)invalidate;
-(void)changeQuoteLevelBy:(long long)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(WKWebProcessPlugInBrowserContextController *)controller;
-(JSContext *)jsContext;
-(id)willSendRequest:(id)arg1 ;
-(void)resumePerformOnPage;
-(void)performOnPage:(/*^block*/id)arg1 ;
-(void)performBodyFieldMethodOnPage:(id)arg1 withArguments:(id)arg2 ;
-(void)initializeGlobalObject;
-(void)suspendPerformOnPage;
-(void)initializeBodyField:(id)arg1 ;
-(JSValue *)jsBodyField;
@end

