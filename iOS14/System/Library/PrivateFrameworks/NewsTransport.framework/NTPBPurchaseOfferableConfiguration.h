/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying> {

	NSString* _purchaseId;
	BOOL _allowsPublisherPadApp;
	BOOL _allowsPublisherPhoneApp;
	BOOL _allowsPublisherWebSite;
	BOOL _preferredOffer;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                        //@synthesize purchaseId=_purchaseId - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsPublisherPhoneApp; 
@property (assign,nonatomic) BOOL allowsPublisherPhoneApp;                 //@synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsPublisherPadApp; 
@property (assign,nonatomic) BOOL allowsPublisherPadApp;                   //@synthesize allowsPublisherPadApp=_allowsPublisherPadApp - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsPublisherWebSite; 
@property (assign,nonatomic) BOOL allowsPublisherWebSite;                  //@synthesize allowsPublisherWebSite=_allowsPublisherWebSite - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredOffer; 
@property (assign,nonatomic) BOOL preferredOffer;                          //@synthesize preferredOffer=_preferredOffer - In the implementation block
+(id)purchaseOfferableConfigurationsFromJSON:(id)arg1 ;
-(void)setAllowsPublisherPadApp:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasAllowsPublisherPhoneApp:(BOOL)arg1 ;
-(void)setHasAllowsPublisherWebSite:(BOOL)arg1 ;
-(BOOL)hasPreferredOffer;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)allowsPublisherWebSite;
-(void)setHasAllowsPublisherPadApp:(BOOL)arg1 ;
-(void)setAllowsPublisherWebSite:(BOOL)arg1 ;
-(BOOL)allowsPublisherPadApp;
-(BOOL)allowsPublisherPhoneApp;
-(BOOL)hasPurchaseId;
-(id)description;
-(void)setPreferredOffer:(BOOL)arg1 ;
-(void)setPurchaseId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasAllowsPublisherPhoneApp;
-(BOOL)hasAllowsPublisherPadApp;
-(NSString *)purchaseId;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)preferredOffer;
-(void)setAllowsPublisherPhoneApp:(BOOL)arg1 ;
-(BOOL)hasAllowsPublisherWebSite;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPreferredOffer:(BOOL)arg1 ;
-(void)dealloc;
@end

