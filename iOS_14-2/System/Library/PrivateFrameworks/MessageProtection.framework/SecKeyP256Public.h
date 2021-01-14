/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <libobjc.A.dylib/P256PublicKeyProtocol.h>

@class NSData, NSString;

@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol> {

	SecKeyRef _publicKeyRef;
	NSData* _serializedKey;

}

@property (assign) SecKeyRef publicKeyRef;                          //@synthesize publicKeyRef=_publicKeyRef - In the implementation block
@property (retain) NSData * serializedKey;                          //@synthesize serializedKey=_serializedKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataRepresentation;
-(NSData *)serializedKey;
-(BOOL)verifySignature:(id)arg1 data:(id)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(SecKeyRef)publicKeyRef;
-(void)setPublicKeyRef:(SecKeyRef)arg1 ;
-(void)setSerializedKey:(NSData *)arg1 ;
-(id)initWithSecKeyRef:(SecKeyRef)arg1 ;
-(void)dealloc;
@end

