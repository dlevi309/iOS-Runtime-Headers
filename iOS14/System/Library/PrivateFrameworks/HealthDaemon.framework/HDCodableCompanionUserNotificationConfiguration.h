/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying> {

	int _notificationType;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasNotificationType; 
@property (assign,nonatomic) int notificationType;                  //@synthesize notificationType=_notificationType - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasNotificationType;
-(void)mergeFrom:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(id)description;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)notificationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)notificationTypeAsString:(int)arg1 ;
-(int)StringAsNotificationType:(id)arg1 ;
@end

