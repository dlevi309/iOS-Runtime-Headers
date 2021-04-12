/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFSafariViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface SFLinkRedirectionViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)setDefersAddingRemoteViewController:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3 ;
-(void)viewDidLoad;
@end

