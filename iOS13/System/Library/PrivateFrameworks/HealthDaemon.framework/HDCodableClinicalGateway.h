/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMessageVersion, NSData;

@interface HDCodableClinicalGateway : PBCodable <NSCopying> {

	HDCodableMessageVersion* _messageVersion;
	NSData* _rawContent;

}

@property (nonatomic,readonly) BOOL hasRawContent; 
@property (nonatomic,retain) NSData * rawContent;                                   //@synthesize rawContent=_rawContent - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageVersion; 
@property (nonatomic,retain) HDCodableMessageVersion * messageVersion;              //@synthesize messageVersion=_messageVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRawContent:(NSData *)arg1 ;
-(void)setMessageVersion:(HDCodableMessageVersion *)arg1 ;
-(BOOL)hasRawContent;
-(BOOL)hasMessageVersion;
-(NSData *)rawContent;
-(HDCodableMessageVersion *)messageVersion;
@end

