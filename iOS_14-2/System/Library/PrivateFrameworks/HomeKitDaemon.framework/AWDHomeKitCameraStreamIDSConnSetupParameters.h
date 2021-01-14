/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying> {

	unsigned _connectionComplete;
	unsigned _connectionRequested;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasConnectionRequested; 
@property (assign,nonatomic) unsigned connectionRequested;              //@synthesize connectionRequested=_connectionRequested - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionComplete; 
@property (assign,nonatomic) unsigned connectionComplete;               //@synthesize connectionComplete=_connectionComplete - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConnectionRequested:(unsigned)arg1 ;
-(void)setHasConnectionRequested:(BOOL)arg1 ;
-(BOOL)hasConnectionRequested;
-(void)setConnectionComplete:(unsigned)arg1 ;
-(void)setHasConnectionComplete:(BOOL)arg1 ;
-(BOOL)hasConnectionComplete;
-(unsigned)connectionRequested;
-(unsigned)connectionComplete;
@end

