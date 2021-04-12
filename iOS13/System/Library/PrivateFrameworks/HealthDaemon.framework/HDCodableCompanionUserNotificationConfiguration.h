/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(int)notificationType;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(BOOL)hasNotificationType;
-(id)notificationTypeAsString:(int)arg1 ;
-(int)StringAsNotificationType:(id)arg1 ;
@end

