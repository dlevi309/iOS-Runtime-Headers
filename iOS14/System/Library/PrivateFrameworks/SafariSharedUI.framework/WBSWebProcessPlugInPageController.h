/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WKWebProcessPlugInLoadDelegate.h>

@class WKWebProcessPlugInBrowserContextController, WBSWebProcessPlugIn, WKWebProcessPlugInFrame, NSString;

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate> {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	WBSWebProcessPlugIn* _webProcessPlugIn;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (nonatomic,readonly) WKWebProcessPlugInBrowserContextController * browserContextController;              //@synthesize browserContextController=_browserContextController - In the implementation block
@property (nonatomic,readonly) WBSWebProcessPlugIn * webProcessPlugIn;                                             //@synthesize webProcessPlugIn=_webProcessPlugIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(WKWebProcessPlugInBrowserContextController *)browserContextController;
-(WBSWebProcessPlugIn *)webProcessPlugIn;
-(WKWebProcessPlugInFrame *)mainFrame;
@end

