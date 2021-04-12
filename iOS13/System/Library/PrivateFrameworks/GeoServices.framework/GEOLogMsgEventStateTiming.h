/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {

	double _durationInOldState;
	NSMutableArray* _stateTransitionFeedbacks;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * stateTransitionFeedbacks; 
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stateTransitionFeedbackType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addStateTransitionFeedback:(id)arg1 ;
-(unsigned long long)stateTransitionFeedbacksCount;
-(void)clearStateTransitionFeedbacks;
-(id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stateTransitionFeedbacks;
-(void)setStateTransitionFeedbacks:(NSMutableArray *)arg1 ;
-(double)durationInOldState;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
@end

