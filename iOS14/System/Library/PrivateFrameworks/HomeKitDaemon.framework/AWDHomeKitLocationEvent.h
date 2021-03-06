/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitLocationEvent : PBCodable <NSCopying> {

	BOOL _notifyOnEntry;
	BOOL _notifyOnExit;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasNotifyOnEntry; 
@property (assign,nonatomic) BOOL notifyOnEntry;                 //@synthesize notifyOnEntry=_notifyOnEntry - In the implementation block
@property (assign,nonatomic) BOOL hasNotifyOnExit; 
@property (assign,nonatomic) BOOL notifyOnExit;                  //@synthesize notifyOnExit=_notifyOnExit - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)notifyOnEntry;
-(BOOL)notifyOnExit;
-(id)description;
-(void)setNotifyOnExit:(BOOL)arg1 ;
-(void)setNotifyOnEntry:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasNotifyOnEntry:(BOOL)arg1 ;
-(BOOL)hasNotifyOnEntry;
-(void)setHasNotifyOnExit:(BOOL)arg1 ;
-(BOOL)hasNotifyOnExit;
@end

