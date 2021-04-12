/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic,__weak) id<CDPStateUIProvider> cdpUiProvider; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setShouldForceOperation:(BOOL)arg1 ;
-(void)setOperationUIPermissions:(long long)arg1 ;
-(void)setCdpUiProvider:(id<CDPStateUIProvider>)arg1 ;
@end

