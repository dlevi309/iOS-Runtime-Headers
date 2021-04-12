/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(BOOL)isEqualToPhysicalCardAction:(id)arg1 ;
-(id)_shippingAddressJSONRepresentation;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(NSString *)activationCode;
-(void)setActivationCode:(NSString *)arg1 ;
-(CNPostalAddress *)shippingAddress;
-(void)setShippingAddress:(CNPostalAddress *)arg1 ;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
-(PKPhysicalCardPriceOption *)priceOption;
-(void)setPriceOption:(PKPhysicalCardPriceOption *)arg1 ;
@end

