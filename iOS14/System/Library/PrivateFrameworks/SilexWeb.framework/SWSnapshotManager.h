/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSnapshotManager.h>

@protocol SWSnapshotManager <NSObject>
@required
-(void)takeSnapshotWithCompletionHandler:(/*^block*/id)arg1;

@end


@protocol SWConfigurationManager;
@class WKWebView, NSString;

@interface SWSnapshotManager : NSObject <SWSnapshotManager> {

	WKWebView* _webView;
	id<SWConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) WKWebView * webView;                                          //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) id<SWConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(id<SWConfigurationManager>)configurationManager;
-(void)takeSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithWebView:(id)arg1 configurationManager:(id)arg2 ;
@end

