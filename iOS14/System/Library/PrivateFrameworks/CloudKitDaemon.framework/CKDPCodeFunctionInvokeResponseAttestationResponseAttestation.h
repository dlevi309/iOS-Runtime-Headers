/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPCodeFunctionInvokeResponseAttestationResponseAttestation : PBCodable <NSCopying> {

	NSData* _appQuote;
	NSData* _aqeQuote;
	NSString* _pckCertificate;
	NSData* _routingToken;

}

@property (nonatomic,readonly) BOOL hasAppQuote; 
@property (nonatomic,retain) NSData * appQuote;                      //@synthesize appQuote=_appQuote - In the implementation block
@property (nonatomic,readonly) BOOL hasAqeQuote; 
@property (nonatomic,retain) NSData * aqeQuote;                      //@synthesize aqeQuote=_aqeQuote - In the implementation block
@property (nonatomic,readonly) BOOL hasPckCertificate; 
@property (nonatomic,retain) NSString * pckCertificate;              //@synthesize pckCertificate=_pckCertificate - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                  //@synthesize routingToken=_routingToken - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAppQuote:(NSData *)arg1 ;
-(void)setAqeQuote:(NSData *)arg1 ;
-(void)setPckCertificate:(NSString *)arg1 ;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasAppQuote;
-(BOOL)hasAqeQuote;
-(BOOL)hasPckCertificate;
-(BOOL)hasRoutingToken;
-(NSData *)appQuote;
-(NSData *)aqeQuote;
-(NSString *)pckCertificate;
-(NSData *)routingToken;
@end

