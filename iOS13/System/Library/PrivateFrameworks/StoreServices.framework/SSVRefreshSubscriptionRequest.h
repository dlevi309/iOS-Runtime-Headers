/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSString;

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	BOOL _requestingOfflineSlot;

}

@property (assign,getter=isRequestingOfflineSlot,nonatomic) BOOL requestingOfflineSlot;              //@synthesize requestingOfflineSlot=_requestingOfflineSlot - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;                          //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)isRequestingOfflineSlot;
-(void)setRequestingOfflineSlot:(BOOL)arg1 ;
@end

