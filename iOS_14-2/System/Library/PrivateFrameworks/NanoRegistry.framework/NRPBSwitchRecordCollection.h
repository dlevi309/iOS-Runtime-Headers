/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBSwitchRecordCollection : PBCodable <NSCopying> {

	NSMutableArray* _records;

}

@property (nonatomic,retain) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
+(Class)recordsType;
-(id)dictionaryRepresentation;
-(void)addRecords:(id)arg1 ;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)clearRecords;
-(NSMutableArray *)records;
-(unsigned long long)recordsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

