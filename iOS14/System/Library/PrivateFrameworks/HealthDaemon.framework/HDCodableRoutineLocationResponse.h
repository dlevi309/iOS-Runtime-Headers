/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineLocationResponse : PBCodable <NSCopying> {

	HDCodableRoutineLocation* _locationOfInterest;

}

@property (nonatomic,readonly) BOOL hasLocationOfInterest; 
@property (nonatomic,retain) HDCodableRoutineLocation * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(HDCodableRoutineLocation *)locationOfInterest;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocationOfInterest:(HDCodableRoutineLocation *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLocationOfInterest;
@end

