/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@protocol P256PublicKeyProtocol;
@interface PublicKey : NSObject {

	id<P256PublicKeyProtocol> _key;

}

@property (retain) id<P256PublicKeyProtocol> key;              //@synthesize key=_key - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<P256PublicKeyProtocol>)key;
-(id)initWithKey:(id)arg1 ;
-(id)dataRepresentation;
-(void)setKey:(id<P256PublicKeyProtocol>)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

