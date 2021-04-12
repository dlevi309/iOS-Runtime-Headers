/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringDeviceProfile : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _ageOfDevice;
	int _deviceClass;
	int _placesAssociatedToDevice;
	int _timeIntervalSinceLastRecordAssociation;
	int _transitionsAssociatedToDevice;
	int _visitsAssociatedToDevice;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                                             //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasAgeOfDevice; 
@property (assign,nonatomic) int ageOfDevice;                                             //@synthesize ageOfDevice=_ageOfDevice - In the implementation block
@property (assign,nonatomic) BOOL hasVisitsAssociatedToDevice; 
@property (assign,nonatomic) int visitsAssociatedToDevice;                                //@synthesize visitsAssociatedToDevice=_visitsAssociatedToDevice - In the implementation block
@property (assign,nonatomic) BOOL hasPlacesAssociatedToDevice; 
@property (assign,nonatomic) int placesAssociatedToDevice;                                //@synthesize placesAssociatedToDevice=_placesAssociatedToDevice - In the implementation block
@property (assign,nonatomic) BOOL hasTransitionsAssociatedToDevice; 
@property (assign,nonatomic) int transitionsAssociatedToDevice;                           //@synthesize transitionsAssociatedToDevice=_transitionsAssociatedToDevice - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceLastRecordAssociation; 
@property (assign,nonatomic) int timeIntervalSinceLastRecordAssociation;                  //@synthesize timeIntervalSinceLastRecordAssociation=_timeIntervalSinceLastRecordAssociation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)deviceClass;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDeviceClass:(int)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(void)setAgeOfDevice:(int)arg1 ;
-(void)setHasAgeOfDevice:(BOOL)arg1 ;
-(BOOL)hasAgeOfDevice;
-(void)setVisitsAssociatedToDevice:(int)arg1 ;
-(void)setHasVisitsAssociatedToDevice:(BOOL)arg1 ;
-(BOOL)hasVisitsAssociatedToDevice;
-(void)setPlacesAssociatedToDevice:(int)arg1 ;
-(void)setHasPlacesAssociatedToDevice:(BOOL)arg1 ;
-(BOOL)hasPlacesAssociatedToDevice;
-(void)setTransitionsAssociatedToDevice:(int)arg1 ;
-(void)setHasTransitionsAssociatedToDevice:(BOOL)arg1 ;
-(BOOL)hasTransitionsAssociatedToDevice;
-(void)setTimeIntervalSinceLastRecordAssociation:(int)arg1 ;
-(void)setHasTimeIntervalSinceLastRecordAssociation:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceLastRecordAssociation;
-(int)ageOfDevice;
-(int)visitsAssociatedToDevice;
-(int)placesAssociatedToDevice;
-(int)transitionsAssociatedToDevice;
-(int)timeIntervalSinceLastRecordAssociation;
@end

