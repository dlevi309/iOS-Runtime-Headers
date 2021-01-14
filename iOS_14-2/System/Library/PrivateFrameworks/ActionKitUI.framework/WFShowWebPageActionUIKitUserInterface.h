/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFWebViewControllerDelegate.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>
#import <libobjc.A.dylib/WFShowWebPageActionUserInterface.h>

@class NSString;

@interface WFShowWebPageActionUIKitUserInterface : WFActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)finishWithError:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showURL:(id)arg1 readerView:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)showRichText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)webViewControllerDidFinish:(id)arg1 ;
@end

