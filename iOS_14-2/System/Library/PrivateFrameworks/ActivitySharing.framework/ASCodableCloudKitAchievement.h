/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ASCodableCloudKitSample;

@interface ASCodableCloudKitAchievement : PBCodable <NSCopying> {

	double _completedDate;
	double _doubleValue;
	long long _intValue;
	long long _workoutActivityType;
	NSString* _definitionIdentifier;
	ASCodableCloudKitSample* _sample;
	NSString* _templateUniqueName;
	SCD_Struct_AS10 _has;

}

@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) ASCodableCloudKitSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                          //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                            //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                            //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutActivityType; 
@property (assign,nonatomic) long long workoutActivityType;                 //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (nonatomic,readonly) BOOL hasDefinitionIdentifier; 
@property (nonatomic,retain) NSString * definitionIdentifier;               //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTemplateUniqueName; 
@property (nonatomic,retain) NSString * templateUniqueName;                 //@synthesize templateUniqueName=_templateUniqueName - In the implementation block
-(id)dictionaryRepresentation;
-(double)doubleValue;
-(double)completedDate;
-(void)setCompletedDate:(double)arg1 ;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(ASCodableCloudKitSample *)sample;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setWorkoutActivityType:(long long)arg1 ;
-(BOOL)hasDoubleValue;
-(id)description;
-(long long)workoutActivityType;
-(unsigned long long)hash;
-(void)setSample:(ASCodableCloudKitSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)intValue;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(NSString *)definitionIdentifier;
-(BOOL)hasTemplateUniqueName;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(BOOL)hasDefinitionIdentifier;
-(void)setHasWorkoutActivityType:(BOOL)arg1 ;
-(BOOL)hasWorkoutActivityType;
-(BOOL)hasSample;
@end

