/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPKeychainCircleProxy.h>

@protocol CDPDCircleProxy;
@class KCPairingChannel, NSString;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {

	KCPairingChannel* _pairingChannel;
	BOOL _complete;
	id<CDPDCircleProxy> _circleProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isComplete;
-(id)initiatingPayload:(id*)arg1 ;
-(id)processIncomingPayload:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsInteractiveAuth;
-(BOOL)requiresInitialSync;
-(id)initWithCircleProxy:(id)arg1 ;
@end

