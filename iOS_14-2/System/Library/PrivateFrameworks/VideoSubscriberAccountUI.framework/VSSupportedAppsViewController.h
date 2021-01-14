/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <UIKitCore/UIViewController.h>

@protocol VSSupportedAppsViewControllerDelegate;
@class VSOptional, VSAuditToken, NSOperationQueue, NSArray;

@interface VSSupportedAppsViewController : UIViewController {

	VSOptional* _identityProvider;
	VSAuditToken* _auditToken;
	id<VSSupportedAppsViewControllerDelegate> _delegate;
	NSOperationQueue* _privateQueue;
	NSArray* _apps;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                                        //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) NSArray * apps;                                                           //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) VSOptional * identityProvider;                                          //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic,__weak) id<VSSupportedAppsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setApps:(NSArray *)arg1 ;
-(id<VSSupportedAppsViewControllerDelegate>)delegate;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(NSArray *)apps;
-(VSAuditToken *)auditToken;
-(void)setDelegate:(id<VSSupportedAppsViewControllerDelegate>)arg1 ;
-(void)_presentError:(id)arg1 ;
-(void)viewDidLoad;
-(void)_didFinish;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(VSOptional *)identityProvider;
-(void)setIdentityProvider:(VSOptional *)arg1 ;
-(void)beginLoadingApps;
-(void)_doneButtonPresed:(id)arg1 ;
-(void)_finishLoadingApps:(id)arg1 ;
@end

