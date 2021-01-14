/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface PKPeerPaymentTransactionMetadata : NSObject <NSSecureCoding> {

	NSString* _dpanIdentifier;
	NSString* _serviceIdentifier;
	NSUUID* _requestDeviceScoreIdentifier;
	NSUUID* _sendDeviceScoreIdentifier;

}

@property (setter=setDPANIdentifier:,nonatomic,copy) NSString * dpanIdentifier;              //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                                     //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * requestDeviceScoreIdentifier;                            //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * sendDeviceScoreIdentifier;                               //@synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestDeviceScoreIdentifier;
-(BOOL)isEqualToPeerPaymentTransactionMetadata:(id)arg1 ;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setDPANIdentifier:(id)arg1 ;
-(NSString *)dpanIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

