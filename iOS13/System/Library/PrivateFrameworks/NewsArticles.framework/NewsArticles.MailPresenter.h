/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/SXMailPresenter.h>

@interface NewsArticles.MailPresenter : NSObject <MFMailComposeViewControllerDelegate, SXMailPresenter> {

	 host;
	 viewControllerPresenting;

}
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id)init;
-(BOOL)canComposeMail;
-(void)presentMail:(id)arg1 ;
@end

