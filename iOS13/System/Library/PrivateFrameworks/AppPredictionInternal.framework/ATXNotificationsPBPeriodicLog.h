/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXNotificationsPBPeriodicLog : PBCodable <NSCopying> {

	unsigned long long _periodEnd;
	unsigned long long _periodStart;
	NSMutableArray* _datas;
	NSString* _userId;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                           //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodStart; 
@property (assign,nonatomic) unsigned long long periodStart;              //@synthesize periodStart=_periodStart - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodEnd; 
@property (assign,nonatomic) unsigned long long periodEnd;                //@synthesize periodEnd=_periodEnd - In the implementation block
@property (nonatomic,retain) NSMutableArray * datas;                      //@synthesize datas=_datas - In the implementation block
+(Class)dataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)periodStart;
-(unsigned long long)periodEnd;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)addData:(id)arg1 ;
-(NSMutableArray *)datas;
-(void)setDatas:(NSMutableArray *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasUserId;
-(void)setPeriodStart:(unsigned long long)arg1 ;
-(void)setHasPeriodStart:(BOOL)arg1 ;
-(BOOL)hasPeriodStart;
-(void)setPeriodEnd:(unsigned long long)arg1 ;
-(void)setHasPeriodEnd:(BOOL)arg1 ;
-(BOOL)hasPeriodEnd;
@end

