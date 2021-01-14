/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SIServiceServerUploadInfo : PBCodable {

	BOOL _hasNs_server_upload_ts;
	long long _ns_server_upload_ts;

}

@property (assign,nonatomic) long long ns_server_upload_ts;              //@synthesize ns_server_upload_ts=_ns_server_upload_ts - In the implementation block
@property (assign,nonatomic) BOOL hasNs_server_upload_ts;                //@synthesize hasNs_server_upload_ts=_hasNs_server_upload_ts - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNs_server_upload_ts:(long long)arg1 ;
-(long long)ns_server_upload_ts;
-(BOOL)hasNs_server_upload_ts;
-(void)setHasNs_server_upload_ts:(BOOL)arg1 ;
@end

