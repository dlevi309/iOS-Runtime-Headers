/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {

	SCD_Struct_HD93* _modificationDates;
	long long _objectType;
	NSData* _sourceUUIDs;
	BOOL _userOrdered;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;                                     //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasUserOrdered; 
@property (assign,nonatomic) BOOL userOrdered;                                         //@synthesize userOrdered=_userOrdered - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUIDs; 
@property (nonatomic,retain) NSData * sourceUUIDs;                                     //@synthesize sourceUUIDs=_sourceUUIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long modificationDatesCount; 
@property (nonatomic,readonly) double* modificationDates; 
-(id)dictionaryRepresentation;
-(long long)objectType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasObjectType;
-(void)setObjectType:(long long)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(id)description;
-(BOOL)userOrdered;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)decodedDataTypeCode;
-(NSData *)sourceUUIDs;
-(unsigned long long)modificationDatesCount;
-(double*)modificationDates;
-(BOOL)hasUserOrdered;
-(BOOL)hasSourceUUIDs;
-(void)setUserOrdered:(BOOL)arg1 ;
-(void)addModificationDates:(double)arg1 ;
-(void)setSourceUUIDs:(NSData *)arg1 ;
-(void)clearModificationDates;
-(double)modificationDatesAtIndex:(unsigned long long)arg1 ;
-(void)setHasUserOrdered:(BOOL)arg1 ;
-(void)setModificationDates:(double*)arg1 count:(unsigned long long)arg2 ;
@end

