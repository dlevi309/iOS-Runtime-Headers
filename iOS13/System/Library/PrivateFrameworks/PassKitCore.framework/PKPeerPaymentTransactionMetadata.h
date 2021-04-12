/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestDeviceScoreIdentifier;
-(NSString *)dpanIdentifier;
-(void)setDPANIdentifier:(id)arg1 ;
-(BOOL)isEqualToPeerPaymentTransactionMetadata:(id)arg1 ;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
@end

