/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKAuthorizationClientProtocol.h>

@protocol AKAuthorizationUIProvider;
@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol> {

	id<AKAuthorizationUIProvider> _uiProvider;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(id<AKAuthorizationUIProvider>)uiProvider;
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(void)presentAuthorizationUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

