/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CDPStateUIProvider;
@class NSDictionary, UIViewController;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying> {

	NSDictionary* _authenticationResults;
	BOOL _shouldForceOperation;
	long long _operationUIPermissions;
	UIViewController* _viewController;
	id<CDPStateUIProvider> _cdpUiProvider;

}

@property (nonatomic,copy,readonly) NSDictionary * authenticationResults;                //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceOperation;                                //@synthesize shouldForceOperation=_shouldForceOperation - In the implementation block
@property (nonatomic,readonly) long long operationUIPermissions;                         //@synthesize operationUIPermissions=_operationUIPermissions - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,__weak,readonly) id<CDPStateUIProvider> cdpUiProvider;              //@synthesize cdpUiProvider=_cdpUiProvider - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(id)contextWithContext:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIViewController *)viewController;
-(NSDictionary *)authenticationResults;
-(id<CDPStateUIProvider>)cdpUiProvider;
-(BOOL)shouldForceOperation;
-(long long)operationUIPermissions;
@end

