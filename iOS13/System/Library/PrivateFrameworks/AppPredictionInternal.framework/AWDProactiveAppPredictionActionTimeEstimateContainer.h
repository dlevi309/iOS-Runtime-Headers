/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDProactiveAppPredictionActionTimeEstimateContainer : PBCodable <NSCopying> {

	SCD_Struct_AW2* _launchReasons;
	SCD_Struct_AW2* _sessionIndexs;
	SCD_Struct_AW2* _sessionLengths;
	SCD_Struct_AW2* _timeEstimates;
	NSString* _actionKey;
	int _actionType;
	int _noMatchCount;
	NSMutableArray* _parameters;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,retain) NSString * actionKey;                                  //@synthesize actionKey=_actionKey - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                        //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;                           //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long timeEstimatesCount; 
@property (nonatomic,readonly) int* timeEstimates; 
@property (nonatomic,readonly) unsigned long long sessionLengthsCount; 
@property (nonatomic,readonly) int* sessionLengths; 
@property (nonatomic,readonly) unsigned long long sessionIndexsCount; 
@property (nonatomic,readonly) int* sessionIndexs; 
@property (assign,nonatomic) BOOL hasNoMatchCount; 
@property (assign,nonatomic) int noMatchCount;                                      //@synthesize noMatchCount=_noMatchCount - In the implementation block
@property (nonatomic,readonly) unsigned long long launchReasonsCount; 
@property (nonatomic,readonly) int* launchReasons; 
+(Class)parameterType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)parameters;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(unsigned long long)parametersCount;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(void)clearParameters;
-(NSString *)actionKey;
-(void)addParameter:(id)arg1 ;
-(id)parameterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeEstimatesCount;
-(int*)timeEstimates;
-(void)clearTimeEstimates;
-(void)addTimeEstimate:(int)arg1 ;
-(int)timeEstimateAtIndex:(unsigned long long)arg1 ;
-(void)setTimeEstimates:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)sessionLengthsCount;
-(int*)sessionLengths;
-(void)clearSessionLengths;
-(void)addSessionLength:(int)arg1 ;
-(int)sessionLengthAtIndex:(unsigned long long)arg1 ;
-(void)setSessionLengths:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)sessionIndexsCount;
-(int*)sessionIndexs;
-(void)clearSessionIndexs;
-(void)addSessionIndex:(int)arg1 ;
-(int)sessionIndexAtIndex:(unsigned long long)arg1 ;
-(void)setSessionIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setNoMatchCount:(int)arg1 ;
-(void)setHasNoMatchCount:(BOOL)arg1 ;
-(BOOL)hasNoMatchCount;
-(unsigned long long)launchReasonsCount;
-(int*)launchReasons;
-(void)clearLaunchReasons;
-(void)addLaunchReason:(int)arg1 ;
-(int)launchReasonAtIndex:(unsigned long long)arg1 ;
-(void)setLaunchReasons:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)launchReasonsAsString:(int)arg1 ;
-(int)StringAsLaunchReasons:(id)arg1 ;
-(void)setActionKey:(NSString *)arg1 ;
-(int)noMatchCount;
@end

