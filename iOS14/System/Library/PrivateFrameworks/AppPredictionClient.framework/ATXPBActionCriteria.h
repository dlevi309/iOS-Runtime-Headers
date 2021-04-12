/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ATXPBActionCriteria : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	NSData* _predicate;
	BOOL _isLockScreenEligible;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsLockScreenEligible; 
@property (assign,nonatomic) BOOL isLockScreenEligible;                 //@synthesize isLockScreenEligible=_isLockScreenEligible - In the implementation block
@property (nonatomic,readonly) BOOL hasPredicate; 
@property (nonatomic,retain) NSData * predicate;                        //@synthesize predicate=_predicate - In the implementation block
-(id)dictionaryRepresentation;
-(double)endDate;
-(NSData *)predicate;
-(void)setStartDate:(double)arg1 ;
-(void)setPredicate:(NSData *)arg1 ;
-(double)startDate;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)isLockScreenEligible;
-(void)setIsLockScreenEligible:(BOOL)arg1 ;
-(void)setHasIsLockScreenEligible:(BOOL)arg1 ;
-(BOOL)hasIsLockScreenEligible;
-(BOOL)hasPredicate;
@end

