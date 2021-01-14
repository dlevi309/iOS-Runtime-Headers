/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying> {

	double _startTime;
	double _stopTime;
	NSString* _clientKey;
	int _score;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasStopTime; 
@property (assign,nonatomic) double stopTime;                   //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,readonly) BOOL hasClientKey; 
@property (nonatomic,retain) NSString * clientKey;              //@synthesize clientKey=_clientKey - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) int score;                         //@synthesize score=_score - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasScore;
-(double)stopTime;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(int)score;
-(void)setStartTime:(double)arg1 ;
-(NSString *)clientKey;
-(void)setScore:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStopTime;
-(void)setStopTime:(double)arg1 ;
-(id)description;
-(BOOL)hasClientKey;
-(unsigned long long)hash;
-(void)setHasStopTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setClientKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(BOOL)isEqual:(id)arg1 ;
@end

