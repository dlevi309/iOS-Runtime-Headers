/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKRemoteDevice, PKPaymentRequest, NSString;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding> {

	PKRemoteDevice* _device;
	PKPaymentRequest* _paymentRequest;
	NSString* _selectedApplicationIdentifier;
	NSString* _identifier;

}

@property (nonatomic,readonly) PKRemoteDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                   //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,copy) NSString * selectedApplicationIdentifier;              //@synthesize selectedApplicationIdentifier=_selectedApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSelectedApplicationIdentifier:(NSString *)arg1 ;
-(PKRemoteDevice *)device;
-(id)description;
-(BOOL)isEqualToRemoteRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)selectedApplicationIdentifier;
-(PKPaymentRequest *)paymentRequest;
-(id)initWithDevice:(id)arg1 identifier:(id)arg2 ;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

