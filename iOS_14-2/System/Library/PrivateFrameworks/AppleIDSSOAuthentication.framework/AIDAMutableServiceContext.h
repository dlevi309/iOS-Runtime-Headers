/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <AppleIDSSOAuthentication/AIDAServiceContext.h>

@class NSDictionary, UIViewController;

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (nonatomic,copy) NSDictionary * authenticationResults; 
@property (assign,nonatomic) BOOL shouldForceOperation; 
@property (assign,nonatomic) long long operationUIPermissions; 
@property (nonatomic,retain) UIViewController * viewController; 
@property (nonatomic,retain) NSDictionary * signInContexts; 
@property (nonatomic,retain) NSDictionary * signOutContexts; 
@property (nonatomic,retain) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate; 
@property (nonatomic,retain) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate; 
@property (assign,nonatomic,__weak) id<CDPStateUIProvider> cdpUiProvider; 
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setShouldForceOperation:(BOOL)arg1 ;
-(void)setOperationUIPermissions:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCdpUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)setSignInContexts:(NSDictionary *)arg1 ;
-(void)setSignOutContexts:(NSDictionary *)arg1 ;
-(void)setAaSignInFlowControllerDelegate:(id<AASignInFlowControllerDelegate>)arg1 ;
-(void)setAaSignOutFlowControllerDelegate:(id<AASignOutFlowControllerDelegate>)arg1 ;
@end

