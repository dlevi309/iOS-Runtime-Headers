/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPKeychainCircleProxy.h>

@class KCJoiningRequestCircleSession, KCJoiningRequestAccountCircleDelegate, NSString;

@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy> {

	KCJoiningRequestCircleSession* _session;
	KCJoiningRequestAccountCircleDelegate* _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)isComplete;
-(id)initiatingPayload:(id*)arg1 ;
-(id)processIncomingPayload:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsInteractiveAuth;
-(BOOL)requiresInitialSync;
@end

