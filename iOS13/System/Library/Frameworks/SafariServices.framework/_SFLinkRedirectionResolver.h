/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFSafariViewControllerDelegateInternal.h>

@class SFLinkRedirectionViewController, SFSafariViewController, NSString;

@interface _SFLinkRedirectionResolver : NSObject <SFSafariViewControllerDelegateInternal> {

	/*^block*/id _completionHandler;
	SFLinkRedirectionViewController* _redirectionViewController;

}

@property (nonatomic,readonly) SFSafariViewController * safariViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)safariViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3 ;
-(id)initWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SFSafariViewController *)safariViewController;
@end

