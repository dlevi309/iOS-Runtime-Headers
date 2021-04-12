/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying> {

	unsigned _connectionComplete;
	unsigned _connectionRequested;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasConnectionRequested; 
@property (assign,nonatomic) unsigned connectionRequested;              //@synthesize connectionRequested=_connectionRequested - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionComplete; 
@property (assign,nonatomic) unsigned connectionComplete;               //@synthesize connectionComplete=_connectionComplete - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConnectionRequested:(unsigned)arg1 ;
-(void)setHasConnectionRequested:(BOOL)arg1 ;
-(BOOL)hasConnectionRequested;
-(void)setConnectionComplete:(unsigned)arg1 ;
-(void)setHasConnectionComplete:(BOOL)arg1 ;
-(BOOL)hasConnectionComplete;
-(unsigned)connectionRequested;
-(unsigned)connectionComplete;
@end

