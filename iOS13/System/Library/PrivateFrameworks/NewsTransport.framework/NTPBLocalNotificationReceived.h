/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {

	int _localNotificationNumberReceived;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasLocalNotificationNumberReceived; 
@property (assign,nonatomic) int localNotificationNumberReceived;                  //@synthesize localNotificationNumberReceived=_localNotificationNumberReceived - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocalNotificationNumberReceived:(int)arg1 ;
-(void)setHasLocalNotificationNumberReceived:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationNumberReceived;
-(int)localNotificationNumberReceived;
@end

