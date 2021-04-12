/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableRoutineLocation *)locationOfInterest;
-(void)setLocationOfInterest:(HDCodableRoutineLocation *)arg1 ;
-(BOOL)hasLocationOfInterest;
@end

