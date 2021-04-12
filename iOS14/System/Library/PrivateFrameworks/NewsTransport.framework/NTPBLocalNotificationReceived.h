/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {

	int _localNotificationNumberReceived;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasLocalNotificationNumberReceived; 
@property (assign,nonatomic) int localNotificationNumberReceived;                  //@synthesize localNotificationNumberReceived=_localNotificationNumberReceived - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocalNotificationNumberReceived:(int)arg1 ;
-(void)setHasLocalNotificationNumberReceived:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationNumberReceived;
-(int)localNotificationNumberReceived;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

