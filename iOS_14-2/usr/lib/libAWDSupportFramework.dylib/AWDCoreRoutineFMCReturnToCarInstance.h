/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineFMCReturnToCarInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _horizontalAccuracy;
	int _horizontalDistance;
	NSString* _parkingId;
	SCD_Struct_AW4 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingId; 
@property (nonatomic,retain) NSString * parkingId;                      //@synthesize parkingId=_parkingId - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) int horizontalAccuracy;                    //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalDistance; 
@property (assign,nonatomic) int horizontalDistance;                    //@synthesize horizontalDistance=_horizontalDistance - In the implementation block
-(BOOL)valid:(id*)arg1 ;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasHorizontalAccuracy;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(int)horizontalAccuracy;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHorizontalAccuracy:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)horizontalDistance;
-(void)setHorizontalDistance:(int)arg1 ;
-(void)setParkingId:(NSString *)arg1 ;
-(BOOL)hasParkingId;
-(NSString *)parkingId;
-(void)setHasHorizontalDistance:(BOOL)arg1 ;
-(BOOL)hasHorizontalDistance;
@end

