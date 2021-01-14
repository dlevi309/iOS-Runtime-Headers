/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitNotificationResponseFlags : PBCodable <NSCopying> {

	BOOL _alreadyDoing;
	BOOL _poorTiming;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasPoorTiming; 
@property (assign,nonatomic) BOOL poorTiming;                   //@synthesize poorTiming=_poorTiming - In the implementation block
@property (assign,nonatomic) BOOL hasAlreadyDoing; 
@property (assign,nonatomic) BOOL alreadyDoing;                 //@synthesize alreadyDoing=_alreadyDoing - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPoorTiming:(BOOL)arg1 ;
-(void)setHasPoorTiming:(BOOL)arg1 ;
-(BOOL)hasPoorTiming;
-(void)setAlreadyDoing:(BOOL)arg1 ;
-(void)setHasAlreadyDoing:(BOOL)arg1 ;
-(BOOL)hasAlreadyDoing;
-(BOOL)poorTiming;
-(BOOL)alreadyDoing;
@end

