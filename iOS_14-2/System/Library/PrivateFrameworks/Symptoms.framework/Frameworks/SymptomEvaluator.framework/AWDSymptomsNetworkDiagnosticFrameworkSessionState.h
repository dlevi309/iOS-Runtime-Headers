/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying> {

	unsigned long long _stateHeldForSecs;
	unsigned long long _timestamp;
	int _inState;
	NSString* _symptomName;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInState; 
@property (assign,nonatomic) int inState;                                      //@synthesize inState=_inState - In the implementation block
@property (assign,nonatomic) BOOL hasStateHeldForSecs; 
@property (assign,nonatomic) unsigned long long stateHeldForSecs;              //@synthesize stateHeldForSecs=_stateHeldForSecs - In the implementation block
@property (nonatomic,readonly) BOOL hasSymptomName; 
@property (nonatomic,retain) NSString * symptomName;                           //@synthesize symptomName=_symptomName - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)inState;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(NSString *)symptomName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInState:(int)arg1 ;
-(void)setStateHeldForSecs:(unsigned long long)arg1 ;
-(void)setHasInState:(BOOL)arg1 ;
-(BOOL)hasInState;
-(id)inStateAsString:(int)arg1 ;
-(int)StringAsInState:(id)arg1 ;
-(void)setHasStateHeldForSecs:(BOOL)arg1 ;
-(BOOL)hasStateHeldForSecs;
-(BOOL)hasSymptomName;
-(unsigned long long)stateHeldForSecs;
@end

