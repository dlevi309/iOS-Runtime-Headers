/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT5 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)allowsPublisherPhoneApp;
-(void)setAllowsPublisherPhoneApp:(BOOL)arg1 ;
-(BOOL)allowsPublisherPadApp;
-(void)setAllowsPublisherPadApp:(BOOL)arg1 ;
-(BOOL)preferredOffer;
-(void)setPreferredOffer:(BOOL)arg1 ;
-(NSString *)purchaseId;
-(BOOL)allowsPublisherWebSite;
-(void)setPurchaseId:(NSString *)arg1 ;
-(void)setAllowsPublisherWebSite:(BOOL)arg1 ;
-(BOOL)hasPurchaseId;
-(void)setHasAllowsPublisherPhoneApp:(BOOL)arg1 ;
-(BOOL)hasAllowsPublisherPhoneApp;
-(void)setHasAllowsPublisherPadApp:(BOOL)arg1 ;
-(BOOL)hasAllowsPublisherPadApp;
-(void)setHasAllowsPublisherWebSite:(BOOL)arg1 ;
-(BOOL)hasAllowsPublisherWebSite;
-(void)setHasPreferredOffer:(BOOL)arg1 ;
-(BOOL)hasPreferredOffer;
@end

