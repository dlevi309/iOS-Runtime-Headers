/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AASignInFlowControllerDelegate, AASignOutFlowControllerDelegate, CDPStateUIProvider;
@class NSDictionary, UIViewController;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying> {

	NSDictionary* _authenticationResults;
	BOOL _shouldForceOperation;
	long long _operationUIPermissions;
	UIViewController* _viewController;
	id<AASignInFlowControllerDelegate> _aaSignInFlowControllerDelegate;
	id<AASignOutFlowControllerDelegate> _aaSignOutFlowControllerDelegate;
	NSDictionary* _signInContexts;
	NSDictionary* _signOutContexts;
	id<CDPStateUIProvider> _cdpUiProvider;

}

@property (nonatomic,copy,readonly) NSDictionary * authenticationResults;                                        //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceOperation;                                                        //@synthesize shouldForceOperation=_shouldForceOperation - In the implementation block
@property (nonatomic,readonly) long long operationUIPermissions;                                                 //@synthesize operationUIPermissions=_operationUIPermissions - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NSDictionary * signInContexts;                                                    //@synthesize signInContexts=_signInContexts - In the implementation block
@property (nonatomic,readonly) NSDictionary * signOutContexts;                                                   //@synthesize signOutContexts=_signOutContexts - In the implementation block
@property (nonatomic,readonly) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;                //@synthesize aaSignInFlowControllerDelegate=_aaSignInFlowControllerDelegate - In the implementation block
@property (nonatomic,readonly) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;              //@synthesize aaSignOutFlowControllerDelegate=_aaSignOutFlowControllerDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<CDPStateUIProvider> cdpUiProvider;                                      //@synthesize cdpUiProvider=_cdpUiProvider - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(id)contextWithContext:(id)arg1 ;
-(id)init;
-(id<CDPStateUIProvider>)cdpUiProvider;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIViewController *)viewController;
-(NSDictionary *)authenticationResults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)signInContexts;
-(BOOL)shouldForceOperation;
-(long long)operationUIPermissions;
-(NSDictionary *)signOutContexts;
-(id<AASignInFlowControllerDelegate>)aaSignInFlowControllerDelegate;
-(id<AASignOutFlowControllerDelegate>)aaSignOutFlowControllerDelegate;
@end

