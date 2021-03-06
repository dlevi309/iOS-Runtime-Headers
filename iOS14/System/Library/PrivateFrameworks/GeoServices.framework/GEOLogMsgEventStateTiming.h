/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {

	double _durationInOldState;
	NSMutableArray* _stateTransitionFeedbacks;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,retain) NSMutableArray * stateTransitionFeedbacks; 
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
+(Class)stateTransitionFeedbackType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)addStateTransitionFeedback:(id)arg1 ;
-(unsigned long long)stateTransitionFeedbacksCount;
-(void)clearStateTransitionFeedbacks;
-(id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stateTransitionFeedbacks;
-(void)setStateTransitionFeedbacks:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setDurationInOldState:(double)arg1 ;
-(unsigned long long)hash;
-(double)durationInOldState;
-(BOOL)hasDurationInOldState;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

