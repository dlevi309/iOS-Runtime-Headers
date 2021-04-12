/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/PKAddPassesViewControllerDelegate.h>

@protocol OS_dispatch_semaphore;
@class SSAuthenticationContext, UIViewController, PKPass, NSObject, NSString;

@interface SUAddiTunesPassOperation : ISOperation <PKAddPassesViewControllerDelegate> {

	BOOL _addedCard;
	SSAuthenticationContext* _authenticationContext;
	UIViewController* _viewController;
	PKPass* _pass;
	PKPass* _presentedPass;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (assign,nonatomic) BOOL addedCard;                                               //@synthesize addedCard=_addedCard - In the implementation block
@property (nonatomic,retain) PKPass * presentedPass;                                       //@synthesize presentedPass=_presentedPass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;                   //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) PKPass * pass;                                                //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                          //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)run;
-(void)setPass:(PKPass *)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(UIViewController *)viewController;
-(SSAuthenticationContext *)authenticationContext;
-(PKPass *)pass;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(void)setPresentedPass:(PKPass *)arg1 ;
-(BOOL)addedCard;
-(PKPass *)presentedPass;
-(void)setAddedCard:(BOOL)arg1 ;
@end

