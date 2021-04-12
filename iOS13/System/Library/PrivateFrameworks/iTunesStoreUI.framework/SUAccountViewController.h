/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUStorePageViewController.h>

@class NSURL, SUMescalSession, NSString, NSDictionary, ACAccount;

@interface SUAccountViewController : SUStorePageViewController {

	BOOL _failed;
	long long _style;
	NSURL* _accountURL;
	SUMescalSession* _mescalSession;
	long long _mescalState;
	NSString* _primingSignature;
	NSDictionary* _tidHeaders;
	ACAccount* _account;

}

@property (getter=_mescalSession,nonatomic,readonly) SUMescalSession * _mescalSession;              //@synthesize mescalSession=_mescalSession - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long style;                                                       //@synthesize style=_style - In the implementation block
+(id)_latestAccountViewController;
-(id)init;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
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
-(void)_closeMescalSession;
@end

