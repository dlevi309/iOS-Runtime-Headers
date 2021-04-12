/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)wrappingKeyMapEntries;
-(void)addWrappingKeyMapEntries:(id)arg1 ;
-(void)clearWrappingKeyMapEntries;
-(unsigned long long)wrappingKeyMapEntriesCount;
-(id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1 ;
-(void)setWrappingKeyMapEntries:(NSMutableArray *)arg1 ;
@end

