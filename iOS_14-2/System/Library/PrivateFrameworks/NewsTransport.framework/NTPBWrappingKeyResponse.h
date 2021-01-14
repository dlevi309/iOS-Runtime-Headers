/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying> {

	NSMutableArray* _wrappingKeyMapEntries;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyMapEntries;              //@synthesize wrappingKeyMapEntries=_wrappingKeyMapEntries - In the implementation block
+(Class)wrappingKeyMapEntriesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)wrappingKeyMapEntries;
-(unsigned long long)hash;
-(void)addWrappingKeyMapEntries:(id)arg1 ;
-(void)clearWrappingKeyMapEntries;
-(unsigned long long)wrappingKeyMapEntriesCount;
-(void)setWrappingKeyMapEntries:(NSMutableArray *)arg1 ;
-(id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

