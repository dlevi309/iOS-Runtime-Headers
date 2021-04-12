/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying> {

	NTPBPaywallDescription* _paywallDescription;

}

@property (nonatomic,readonly) BOOL hasPaywallDescription; 
@property (nonatomic,retain) NTPBPaywallDescription * paywallDescription;              //@synthesize paywallDescription=_paywallDescription - In the implementation block
+(id)publisherPaidDescriptionStringsFromJSON:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setPaywallDescription:(NTPBPaywallDescription *)arg1 ;
-(id)description;
-(BOOL)hasPaywallDescription;
-(NTPBPaywallDescription *)paywallDescription;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

