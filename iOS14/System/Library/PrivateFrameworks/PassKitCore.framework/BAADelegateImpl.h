/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/BAASupportDelegate.h>

@class NSString;

@interface BAADelegateImpl : NSObject <BAASupportDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isInternal;
+(int)generateSigKey:(unsigned)arg1 keyData:(id*)arg2 attestation:(id*)arg3 pubKey:(id*)arg4 ;
+(int)setSigKey:(unsigned)arg1 expirationDate:(unsigned long long)arg2 keyData:(id)arg3 certificates:(id)arg4 ;
+(int)getSigKeyExpDate:(unsigned)arg1 expirationDate:(unsigned long long*)arg2 ;
+(int)getSigKeyCertificates:(unsigned)arg1 certificates:(id*)arg2 ;
+(int)confirmSigKey:(unsigned)arg1 status:(int)arg2 ;
+(int)getBlessedUser:(unsigned*)arg1 keybagUUID:(unsigned char)arg2 ;
@end

