/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding> {

	BOOL _registerBroker;
	BOOL _registerPeerPayment;

}

@property (assign,nonatomic) BOOL registerBroker;                   //@synthesize registerBroker=_registerBroker - In the implementation block
@property (assign,nonatomic) BOOL registerPeerPayment;              //@synthesize registerPeerPayment=_registerPeerPayment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)remoteRegistrationRequestWithProtobuf:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToRemoteRegistrationRequest:(id)arg1 ;
-(BOOL)registerBroker;
-(void)setRegisterBroker:(BOOL)arg1 ;
-(BOOL)registerPeerPayment;
-(void)setRegisterPeerPayment:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

