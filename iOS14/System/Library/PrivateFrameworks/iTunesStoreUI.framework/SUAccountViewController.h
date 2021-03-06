/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUStorePageViewController.h>
#import <libobjc.A.dylib/SUNavigationItemDelegate.h>

@class NSURL, SUMescalSession, NSString, NSDictionary, ACAccount, UIBarButtonItem;

@interface SUAccountViewController : SUStorePageViewController <SUNavigationItemDelegate> {

	BOOL _failed;
	long long _style;
	NSURL* _accountURL;
	SUMescalSession* _mescalSession;
	long long _mescalState;
	NSString* _primingSignature;
	NSDictionary* _tidHeaders;
	BOOL _showAccountGlyph;
	ACAccount* _account;
	UIBarButtonItem* _logoutButton;

}

@property (nonatomic,retain) UIBarButtonItem * logoutButton;                                        //@synthesize logoutButton=_logoutButton - In the implementation block
@property (getter=_mescalSession,nonatomic,readonly) SUMescalSession * _mescalSession;              //@synthesize mescalSession=_mescalSession - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long style;                                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL showAccountGlyph;                                                 //@synthesize showAccountGlyph=_showAccountGlyph - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_latestAccountViewController;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setLogoutButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)logoutButton;
-(void)setShowAccountGlyph:(BOOL)arg1 ;
-(BOOL)showAccountGlyph;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)handleFailureWithError:(id)arg1 ;
-(id)initWithExternalAccountURL:(id)arg1 ;
-(id)copyArchivableContext;
-(id)newFetchOperation;
-(id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id*)arg3 ;
-(void)enqueueFetchOperation;
-(SUMescalSession *)_mescalSession;
-(BOOL)shouldSignRequests;
-(id)_bagKeyForStyle:(long long)arg1 ;
-(id)_URLByRemovingBlacklistedParametersWithURL:(id)arg1 ;
-(BOOL)_shouldUseWebViewFastPath;
-(void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2 ;
-(id)_authenticationQueryParametersForStyle:(long long)arg1 ;
-(void)_logoutPressed:(id)arg1 ;
-(id)navigationItem:(id)arg1 willChangeLeftItem:(id)arg2 toNewItem:(id)arg3 ;
-(id)navigationItem:(id)arg1 willChangeLeftItems:(id)arg2 toNewItems:(id)arg3 ;
-(void)_closeMescalSession;
@end

