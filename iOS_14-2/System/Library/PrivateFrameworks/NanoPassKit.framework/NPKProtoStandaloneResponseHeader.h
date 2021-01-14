/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoStandaloneResponseHeader : PBCodable <NSCopying> {

	int _protocolVersion;
	NSString* _sessionIdentifier;

}

@property (assign,nonatomic) int protocolVersion;                       //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setProtocolVersion:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)protocolVersion;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)protocolVersionAsString:(int)arg1 ;
-(int)StringAsProtocolVersion:(id)arg1 ;
@end

