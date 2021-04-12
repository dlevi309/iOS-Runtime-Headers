/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitLocationEvent : PBCodable <NSCopying> {

	BOOL _notifyOnEntry;
	BOOL _notifyOnExit;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasNotifyOnEntry; 
@property (assign,nonatomic) BOOL notifyOnEntry;                 //@synthesize notifyOnEntry=_notifyOnEntry - In the implementation block
@property (assign,nonatomic) BOOL hasNotifyOnExit; 
@property (assign,nonatomic) BOOL notifyOnExit;                  //@synthesize notifyOnExit=_notifyOnExit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)notifyOnEntry;
-(void)setNotifyOnEntry:(BOOL)arg1 ;
-(BOOL)notifyOnExit;
-(void)setNotifyOnExit:(BOOL)arg1 ;
-(void)setHasNotifyOnEntry:(BOOL)arg1 ;
-(BOOL)hasNotifyOnEntry;
-(void)setHasNotifyOnExit:(BOOL)arg1 ;
-(BOOL)hasNotifyOnExit;
@end

