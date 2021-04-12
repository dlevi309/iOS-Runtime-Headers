/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPaywallDescription:(NTPBPaywallDescription *)arg1 ;
-(BOOL)hasPaywallDescription;
-(NTPBPaywallDescription *)paywallDescription;
@end

