/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@protocol P256PublicKeyProtocol;
@interface PublicKey : NSObject {

	id<P256PublicKeyProtocol> _key;

}

@property (retain) id<P256PublicKeyProtocol> key;              //@synthesize key=_key - In the implementation block
-(id)dataRepresentation;
-(id)initWithKey:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id<P256PublicKeyProtocol>)key;
-(void)setKey:(id<P256PublicKeyProtocol>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

