/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInState; 
@property (assign,nonatomic) int inState;                                      //@synthesize inState=_inState - In the implementation block
@property (assign,nonatomic) BOOL hasStateHeldForSecs; 
@property (assign,nonatomic) unsigned long long stateHeldForSecs;              //@synthesize stateHeldForSecs=_stateHeldForSecs - In the implementation block
@property (nonatomic,readonly) BOOL hasSymptomName; 
@property (nonatomic,retain) NSString * symptomName;                           //@synthesize symptomName=_symptomName - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setInState:(int)arg1 ;
-(void)setStateHeldForSecs:(unsigned long long)arg1 ;
-(NSString *)symptomName;
-(int)inState;
-(void)setHasInState:(BOOL)arg1 ;
-(BOOL)hasInState;
-(id)inStateAsString:(int)arg1 ;
-(int)StringAsInState:(id)arg1 ;
-(void)setHasStateHeldForSecs:(BOOL)arg1 ;
-(BOOL)hasStateHeldForSecs;
-(BOOL)hasSymptomName;
-(unsigned long long)stateHeldForSecs;
@end

