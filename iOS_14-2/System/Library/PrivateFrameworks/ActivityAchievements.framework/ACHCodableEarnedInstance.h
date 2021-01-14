/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ACHCodableEarnedInstance : PBCodable <NSCopying> {

	double _createdDate;
	long long _creatorDevice;
	double _value;
	NSString* _earnedDateComponents;
	NSString* _templateUniqueName;
	NSString* _valueUnitString;
	SCD_Struct_AC1 _has;

}

@property (nonatomic,readonly) BOOL hasTemplateUniqueName; 
@property (nonatomic,retain) NSString * templateUniqueName;                //@synthesize templateUniqueName=_templateUniqueName - In the implementation block
@property (nonatomic,readonly) BOOL hasEarnedDateComponents; 
@property (nonatomic,retain) NSString * earnedDateComponents;              //@synthesize earnedDateComponents=_earnedDateComponents - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedDate; 
@property (assign,nonatomic) double createdDate;                           //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) BOOL hasCreatorDevice; 
@property (assign,nonatomic) long long creatorDevice;                      //@synthesize creatorDevice=_creatorDevice - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValueUnitString; 
@property (nonatomic,retain) NSString * valueUnitString;                   //@synthesize valueUnitString=_valueUnitString - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(BOOL)hasValue;
-(void)setCreatedDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(double)createdDate;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)creatorDevice;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)earnedDateComponents;
-(void)setEarnedDateComponents:(NSString *)arg1 ;
-(void)setCreatorDevice:(long long)arg1 ;
-(void)setValueUnitString:(NSString *)arg1 ;
-(BOOL)hasTemplateUniqueName;
-(BOOL)hasEarnedDateComponents;
-(void)setHasCreatedDate:(BOOL)arg1 ;
-(BOOL)hasCreatedDate;
-(void)setHasCreatorDevice:(BOOL)arg1 ;
-(BOOL)hasCreatorDevice;
-(BOOL)hasValueUnitString;
-(NSString *)valueUnitString;
@end

