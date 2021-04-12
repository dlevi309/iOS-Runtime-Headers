/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTodaySectionsMapping : PBCodable <NSCopying> {

	NSMutableArray* _identifiers;

}

@property (nonatomic,retain) NSMutableArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
+(Class)identifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)identifiers;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(unsigned long long)identifiersCount;
-(void)clearIdentifiers;
-(void)addIdentifiers:(id)arg1 ;
-(id)identifiersAtIndex:(unsigned long long)arg1 ;
@end

