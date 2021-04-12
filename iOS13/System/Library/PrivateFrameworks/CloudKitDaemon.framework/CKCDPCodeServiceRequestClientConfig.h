/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCDPCodeServiceRequestServiceClientConfig;

@interface CKCDPCodeServiceRequestClientConfig : PBCodable <NSCopying> {

	CKCDPCodeServiceRequestServiceClientConfig* _config;
	int _serviceType;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                                                  //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasConfig; 
@property (nonatomic,retain) CKCDPCodeServiceRequestServiceClientConfig * config;              //@synthesize config=_config - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKCDPCodeServiceRequestServiceClientConfig *)config;
-(void)setConfig:(CKCDPCodeServiceRequestServiceClientConfig *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)serviceType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
-(BOOL)hasConfig;
@end

