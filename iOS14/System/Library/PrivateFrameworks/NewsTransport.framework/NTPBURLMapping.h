/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying> {

	NSMutableArray* _domains;

}

@property (nonatomic,retain) NSMutableArray * domains;              //@synthesize domains=_domains - In the implementation block
+(Class)domainsType;
-(id)dictionaryRepresentation;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addDomains:(id)arg1 ;
-(void)clearDomains;
-(unsigned long long)domainsCount;
-(id)domainsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)domains;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

