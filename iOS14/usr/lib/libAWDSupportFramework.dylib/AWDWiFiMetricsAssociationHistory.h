/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiMetricsAssociationHistory : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _associationEvents;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * associationEvents;              //@synthesize associationEvents=_associationEvents - In the implementation block
+(Class)associationEventsType;
-(id)dictionaryRepresentation;
-(void)setAssociationEvents:(NSMutableArray *)arg1 ;
-(unsigned long long)timestamp;
-(void)clearAssociationEvents;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addAssociationEvents:(id)arg1 ;
-(NSMutableArray *)associationEvents;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)associationEventsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)associationEventsCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

