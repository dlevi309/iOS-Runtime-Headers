/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSAutoAuthenticationViewModelDelegate;
@class NSString;

@interface VSAutoAuthenticationViewModel : VSCuratedViewModel {

	id<VSAutoAuthenticationViewModelDelegate> _delegate;
	NSString* _messageTitle;
	NSString* _accountName;
	NSString* _manualSignInTitle;
	NSString* _manualSignInButtonText;

}

@property (assign,nonatomic,__weak) id<VSAutoAuthenticationViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * messageTitle;                                                  //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * accountName;                                                   //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * manualSignInTitle;                                             //@synthesize manualSignInTitle=_manualSignInTitle - In the implementation block
@property (nonatomic,copy) NSString * manualSignInButtonText;                                        //@synthesize manualSignInButtonText=_manualSignInButtonText - In the implementation block
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(id)init;
-(id<VSAutoAuthenticationViewModelDelegate>)delegate;
-(void)setDelegate:(id<VSAutoAuthenticationViewModelDelegate>)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(void)configureWithRequest:(id)arg1 ;
-(void)setManualSignInTitle:(NSString *)arg1 ;
-(void)setManualSignInButtonText:(NSString *)arg1 ;
-(void)didSelectManualSignInButton;
-(NSString *)manualSignInTitle;
-(NSString *)manualSignInButtonText;
@end

