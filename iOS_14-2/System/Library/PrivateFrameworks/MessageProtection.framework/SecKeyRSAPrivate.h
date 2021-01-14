/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@interface SecKeyRSAPrivate : NSObject {

	id _secKeyRef;

}

@property (nonatomic,retain) id secKeyRef;              //@synthesize secKeyRef=_secKeyRef - In the implementation block
-(id)publicKey;
-(id)dataRepresentation;
-(id)secKeyRef;
-(id)init;
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setSecKeyRef:(id)arg1 ;
@end

