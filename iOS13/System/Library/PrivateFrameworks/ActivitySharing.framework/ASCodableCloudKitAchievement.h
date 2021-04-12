/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)doubleValue;
-(long long)intValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
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
-(void)setSample:(ASCodableCloudKitSample *)arg1 ;
-(ASCodableCloudKitSample *)sample;
-(long long)workoutActivityType;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(double)completedDate;
-(void)setCompletedDate:(double)arg1 ;
-(void)setWorkoutActivityType:(long long)arg1 ;
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

