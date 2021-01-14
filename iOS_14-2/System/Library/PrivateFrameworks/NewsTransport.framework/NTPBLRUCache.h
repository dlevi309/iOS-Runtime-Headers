/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying> {

	NSMutableArray* _entries;

}

@property (nonatomic,retain) NSMutableArray * entries;              //@synthesize entries=_entries - In the implementation block
+(Class)entriesType;
-(id)dictionaryRepresentation;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)entries;
-(id)description;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

