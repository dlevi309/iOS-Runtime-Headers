/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPPoiTriggerEvent;

@interface CLPPoiHarvest : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _locations;
	CLPPoiTriggerEvent* _triggerEvent;

}

@property (nonatomic,retain) CLPPoiTriggerEvent * triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                  //@synthesize accessPoints=_accessPoints - In the implementation block
+(Class)locationsType;
+(Class)accessPointsType;
-(NSMutableArray *)locations;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)addLocations:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)mergeFrom:(id)arg1 ;
-(CLPPoiTriggerEvent *)triggerEvent;
-(void)setTriggerEvent:(CLPPoiTriggerEvent *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)accessPointsCount;
-(void)clearAccessPoints;
-(NSMutableArray *)accessPoints;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(void)addAccessPoints:(id)arg1 ;
-(id)accessPointsAtIndex:(unsigned long long)arg1 ;
@end

