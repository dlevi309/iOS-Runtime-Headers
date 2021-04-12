/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKCDPCodeServiceRequestServiceClientConfig *)config;
-(id)dictionaryRepresentation;
-(int)StringAsServiceType:(id)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(id)description;
-(BOOL)hasConfig;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setConfig:(CKCDPCodeServiceRequestServiceClientConfig *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)serviceType;
-(BOOL)hasServiceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serviceTypeAsString:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

