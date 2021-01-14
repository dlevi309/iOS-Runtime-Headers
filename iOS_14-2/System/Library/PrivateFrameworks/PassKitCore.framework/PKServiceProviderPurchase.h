/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKServiceProviderPurchaseData, NSDate, NSArray;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _visibleTransactionIdentifier;
	unsigned long long _state;
	NSString* _deviceIdentifier;
	NSString* _regionIdentifier;
	NSString* _serviceProviderIdentifier;
	PKServiceProviderPurchaseData* _serviceProviderData;
	NSDate* _purchaseDate;
	NSString* _signature;
	NSString* _partnerMetadata;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * visibleTransactionIdentifier;                          //@synthesize visibleTransactionIdentifier=_visibleTransactionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * regionIdentifier;                                      //@synthesize regionIdentifier=_regionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;                             //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy) PKServiceProviderPurchaseData * serviceProviderData;              //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy) NSDate * purchaseDate;                                            //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,copy) NSString * signature;                                             //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * partnerMetadata;                                       //@synthesize partnerMetadata=_partnerMetadata - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                //@synthesize actions=_actions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)purchaseWithDictionary:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)signature;
-(NSArray *)actions;
-(NSString *)visibleTransactionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToServiceProviderPurchase:(id)arg1 ;
-(void)setVisibleTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)regionIdentifier;
-(void)setRegionIdentifier:(NSString *)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSString *)partnerMetadata;
-(void)setPartnerMetadata:(NSString *)arg1 ;
-(NSDate *)purchaseDate;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(PKServiceProviderPurchaseData *)serviceProviderData;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setServiceProviderData:(PKServiceProviderPurchaseData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)serviceProviderIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

