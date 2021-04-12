/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying> {

	NSString* _host;
	unsigned _port;
	BOOL _useTls;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NSString * host;              //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL hasPort; 
@property (assign,nonatomic) unsigned port;                //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) BOOL hasUseTls; 
@property (assign,nonatomic) BOOL useTls;                  //@synthesize useTls=_useTls - In the implementation block
-(void)setPort:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHost:(NSString *)arg1 ;
-(unsigned)port;
-(NSString *)host;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)useTls;
-(id)description;
-(BOOL)hasHost;
-(BOOL)hasPort;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPort:(BOOL)arg1 ;
-(void)setUseTls:(BOOL)arg1 ;
-(void)setHasUseTls:(BOOL)arg1 ;
-(BOOL)hasUseTls;
@end

