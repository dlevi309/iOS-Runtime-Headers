/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKAuthorizationClientProtocol.h>

@protocol AKAuthorizationUIProvider;
@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol> {

	id<AKAuthorizationUIProvider> _uiProvider;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(void)presentAuthorizationUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

