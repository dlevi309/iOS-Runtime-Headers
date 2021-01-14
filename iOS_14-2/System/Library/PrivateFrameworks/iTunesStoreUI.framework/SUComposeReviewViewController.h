/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKComposeReviewDelegate.h>

@class NSURL, SKComposeReviewViewController, NSString;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {

	NSURL* _compositionURL;
	SKComposeReviewViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSURL * compositionURL;              //@synthesize compositionURL=_compositionURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(id)init;
-(void)loadView;
-(void)dealloc;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reviewComposeViewControllerDidFinish:(id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(id)copyScriptViewController;
-(void)_showRemoteView;
-(NSURL *)compositionURL;
@end

