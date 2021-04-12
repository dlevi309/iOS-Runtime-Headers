/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRCompanionAuthOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _companionAuthHandler;
	/*^block*/id _companionAuthHandlerWithError;

}

@property (nonatomic,copy) id companionAuthHandler;                       //@synthesize companionAuthHandler=_companionAuthHandler - In the implementation block
@property (nonatomic,copy) id companionAuthHandlerWithError;              //@synthesize companionAuthHandlerWithError=_companionAuthHandlerWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithCompanionAuthHandler:(/*^block*/id)arg1 ;
-(id)initWithCompanionAuthHandlerWithError:(/*^block*/id)arg1 ;
-(id)companionAuthHandler;
-(void)setCompanionAuthHandler:(id)arg1 ;
-(id)companionAuthHandlerWithError;
-(void)setCompanionAuthHandlerWithError:(id)arg1 ;
@end

