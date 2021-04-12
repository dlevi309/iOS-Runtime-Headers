/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {

	SCD_Struct_HD88* _modificationDates;
	long long _objectType;
	NSData* _sourceUUIDs;
	BOOL _userOrdered;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;                                     //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasUserOrdered; 
@property (assign,nonatomic) BOOL userOrdered;                                         //@synthesize userOrdered=_userOrdered - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUIDs; 
@property (nonatomic,retain) NSData * sourceUUIDs;                                     //@synthesize sourceUUIDs=_sourceUUIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long modificationDatesCount; 
@property (nonatomic,readonly) double* modificationDates; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(long long)objectType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(BOOL)hasObjectType;
-(void)setHasObjectType:(BOOL)arg1 ;
-(long long)decodedDataTypeCode;
-(BOOL)userOrdered;
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

