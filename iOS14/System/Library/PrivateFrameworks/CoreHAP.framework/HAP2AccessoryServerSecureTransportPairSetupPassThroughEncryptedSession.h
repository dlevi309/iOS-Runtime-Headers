/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <libobjc.A.dylib/HAPEncryptedSession.h>

@class NSString;

@interface HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession : NSObject <HAPEncryptedSession>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
@end

