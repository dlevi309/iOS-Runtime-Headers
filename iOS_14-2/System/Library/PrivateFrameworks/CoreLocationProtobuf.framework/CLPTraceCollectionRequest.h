/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _events;
	CLPMeta* _meta;
	int _type;
	SCD_Struct_CL3 _has;

}

@property (nonatomic,retain) CLPMeta * meta;                       //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                             //@synthesize type=_type - In the implementation block
+(Class)eventsType;
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(CLPMeta *)meta;
-(Class)responseClass;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(unsigned)requestTypeCode;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

