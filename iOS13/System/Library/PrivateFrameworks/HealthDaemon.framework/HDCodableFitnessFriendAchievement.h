/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HDCodableSample, NSString;

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying> {

	double _completedDate;
	double _doubleValue;
	long long _intValue;
	NSData* _friendUUID;
	HDCodableSample* _sample;
	NSString* _templateUniqueName;
	SCD_Struct_HD3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                   //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                        //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                       //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                         //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                         //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL hasTemplateUniqueName; 
@property (nonatomic,retain) NSString * templateUniqueName;              //@synthesize templateUniqueName=_templateUniqueName - In the implementation block
-(double)doubleValue;
-(long long)intValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setSample:(HDCodableSample *)arg1 ;
-(HDCodableSample *)sample;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(double)completedDate;
-(void)setCompletedDate:(double)arg1 ;
-(BOOL)hasTemplateUniqueName;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(BOOL)hasFriendUUID;
-(BOOL)hasSample;
-(BOOL)applyToObject:(id)arg1 ;
@end

