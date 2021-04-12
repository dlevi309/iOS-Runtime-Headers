/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@interface SecKeyRSAPublic : NSObject {

	id _secKeyRef;

}

@property (nonatomic,retain) id secKeyRef;              //@synthesize secKeyRef=_secKeyRef - In the implementation block
-(id)dataRepresentation;
-(id)secKeyRef;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setSecKeyRef:(id)arg1 ;
-(id)encryptData:(id)arg1 error:(id*)arg2 ;
-(id)initWithSecKeyRef:(id)arg1 ;
@end

