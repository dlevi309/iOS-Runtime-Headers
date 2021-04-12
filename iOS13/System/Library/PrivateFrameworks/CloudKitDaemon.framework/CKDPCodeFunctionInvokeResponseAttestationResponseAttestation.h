/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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

