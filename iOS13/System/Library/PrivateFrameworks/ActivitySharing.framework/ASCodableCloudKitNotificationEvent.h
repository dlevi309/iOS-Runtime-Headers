/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ASCodableCloudKitNotificationEvent : PBCodable <NSCopying> {

	double _date;
	long long _triggerSnapshotIndex;
	long long _type;
	NSData* _triggerUUID;
	SCD_Struct_AS7 _has;

}

@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                 //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerUUID; 
@property (nonatomic,retain) NSData * triggerUUID;                        //@synthesize triggerUUID=_triggerUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerSnapshotIndex; 
@property (assign,nonatomic) long long triggerSnapshotIndex;              //@synthesize triggerSnapshotIndex=_triggerSnapshotIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)date;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasDate:(BOOL)arg1 ;
-(NSData *)triggerUUID;
-(void)setTriggerUUID:(NSData *)arg1 ;
-(long long)triggerSnapshotIndex;
-(void)setTriggerSnapshotIndex:(long long)arg1 ;
-(BOOL)hasTriggerUUID;
-(void)setHasTriggerSnapshotIndex:(BOOL)arg1 ;
-(BOOL)hasTriggerSnapshotIndex;
@end

