/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {

	long long _lastWebActivityUTCMills;
	BOOL _corporateSharingEnabled;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasCorporateSharingEnabled; 
@property (assign,nonatomic) BOOL corporateSharingEnabled;                   //@synthesize corporateSharingEnabled=_corporateSharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasLastWebActivityUTCMills; 
@property (assign,nonatomic) long long lastWebActivityUTCMills;              //@synthesize lastWebActivityUTCMills=_lastWebActivityUTCMills - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCorporateSharingEnabled:(BOOL)arg1 ;
-(void)setHasCorporateSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasCorporateSharingEnabled;
-(void)setLastWebActivityUTCMills:(long long)arg1 ;
-(void)setHasLastWebActivityUTCMills:(BOOL)arg1 ;
-(BOOL)hasLastWebActivityUTCMills;
-(BOOL)corporateSharingEnabled;
-(long long)lastWebActivityUTCMills;
@end

