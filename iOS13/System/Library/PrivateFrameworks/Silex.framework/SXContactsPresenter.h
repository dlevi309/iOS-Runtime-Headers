/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/SXContactsPresenter.h>

@protocol SXContactsPresenter <NSObject>
@required
-(void)presentContact:(id)arg1;

@end


@protocol SXViewControllerPresenting;
@class CNContactStore, UIViewController, NSString;

@interface SXContactsPresenter : NSObject <CNContactViewControllerDelegate, SXContactsPresenter> {

	id<SXViewControllerPresenting> _viewControllerPresenting;
	CNContactStore* _contactStore;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                        //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;                             //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(UIViewController *)presentedViewController;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(void)presentContact:(id)arg1 ;
-(id)initWithViewControllerPresenting:(id)arg1 contactStore:(id)arg2 ;
-(void)dismissPresentedViewController;
@end

