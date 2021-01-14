/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerSecureTransportBase.h>
#import <libobjc.A.dylib/HAP2AccessoryServerTransportDelegate.h>

@class NSString;

@interface HAP2AccessoryServerSecureTransportPairSetup : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultEncryptedSession;
-(void)transport:(id)arg1 didReceiveEvent:(id)arg2 ;
-(id)initWithTransport:(id)arg1 operationQueue:(id)arg2 encryptedSession:(id)arg3 ;
@end

