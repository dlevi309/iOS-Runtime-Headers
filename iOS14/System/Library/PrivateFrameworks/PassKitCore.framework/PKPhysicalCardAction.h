/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNPostalAddress, PKPhysicalCardPriceOption;

@interface PKPhysicalCardAction : NSObject <NSSecureCoding> {

	unsigned long long _actionType;
	NSString* _activationCode;
	unsigned long long _reason;
	NSString* _artworkIdentifier;
	CNPostalAddress* _shippingAddress;
	NSString* _nameOnCard;
	PKPhysicalCardPriceOption* _priceOption;

}

@property (nonatomic,readonly) unsigned long long actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * activationCode;                              //@synthesize activationCode=_activationCode - In the implementation block
@property (assign,nonatomic) unsigned long long reason;                            //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;                           //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,copy) CNPostalAddress * shippingAddress;                      //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                                  //@synthesize nameOnCard=_nameOnCard - In the implementation block
@property (nonatomic,retain) PKPhysicalCardPriceOption * priceOption;              //@synthesize priceOption=_priceOption - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(unsigned long long)actionType;
-(NSString *)artworkIdentifier;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(PKPhysicalCardPriceOption *)priceOption;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToPhysicalCardAction:(id)arg1 ;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(id)_shippingAddressJSONRepresentation;
-(NSString *)activationCode;
-(void)setActivationCode:(NSString *)arg1 ;
-(CNPostalAddress *)shippingAddress;
-(void)setShippingAddress:(CNPostalAddress *)arg1 ;
-(void)setNameOnCard:(NSString *)arg1 ;
-(void)setPriceOption:(PKPhysicalCardPriceOption *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(NSString *)nameOnCard;
-(BOOL)isEqual:(id)arg1 ;
@end

