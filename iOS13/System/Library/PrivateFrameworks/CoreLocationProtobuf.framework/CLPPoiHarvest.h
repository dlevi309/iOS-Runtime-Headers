/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locations;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(unsigned long long)accessPointsCount;
-(NSMutableArray *)accessPoints;
-(void)clearAccessPoints;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(CLPPoiTriggerEvent *)triggerEvent;
-(void)setTriggerEvent:(CLPPoiTriggerEvent *)arg1 ;
-(void)addLocations:(id)arg1 ;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(void)addAccessPoints:(id)arg1 ;
-(id)accessPointsAtIndex:(unsigned long long)arg1 ;
@end

