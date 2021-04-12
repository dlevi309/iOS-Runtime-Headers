/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBLocalNotificationReturn : PBCodable <NSCopying> {

	long long _localNotificationSentTimestamp;
	int _localNoticationNumberReceived;
	int _localNotificationDirectOpenNumber;
	int _localNotificationType;
	BOOL _localNotificationDirectOpen;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasLocalNotificationDirectOpen; 
@property (assign,nonatomic) BOOL localNotificationDirectOpen;                       //@synthesize localNotificationDirectOpen=_localNotificationDirectOpen - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNoticationNumberReceived; 
@property (assign,nonatomic) int localNoticationNumberReceived;                      //@synthesize localNoticationNumberReceived=_localNoticationNumberReceived - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNotificationType; 
@property (assign,nonatomic) int localNotificationType;                              //@synthesize localNotificationType=_localNotificationType - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNotificationSentTimestamp; 
@property (assign,nonatomic) long long localNotificationSentTimestamp;               //@synthesize localNotificationSentTimestamp=_localNotificationSentTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNotificationDirectOpenNumber; 
@property (assign,nonatomic) int localNotificationDirectOpenNumber;                  //@synthesize localNotificationDirectOpenNumber=_localNotificationDirectOpenNumber - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setLocalNotificationDirectOpen:(BOOL)arg1 ;
-(void)setHasLocalNotificationDirectOpen:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationDirectOpen;
-(int)localNotificationType;
-(void)setLocalNoticationNumberReceived:(int)arg1 ;
-(void)setHasLocalNoticationNumberReceived:(BOOL)arg1 ;
-(BOOL)hasLocalNoticationNumberReceived;
-(void)setLocalNotificationType:(int)arg1 ;
-(void)setHasLocalNotificationType:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationType;
-(void)setLocalNotificationSentTimestamp:(long long)arg1 ;
-(void)setHasLocalNotificationSentTimestamp:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationSentTimestamp;
-(void)setLocalNotificationDirectOpenNumber:(int)arg1 ;
-(void)setHasLocalNotificationDirectOpenNumber:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationDirectOpenNumber;
-(BOOL)localNotificationDirectOpen;
-(int)localNoticationNumberReceived;
-(long long)localNotificationSentTimestamp;
-(int)localNotificationDirectOpenNumber;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

