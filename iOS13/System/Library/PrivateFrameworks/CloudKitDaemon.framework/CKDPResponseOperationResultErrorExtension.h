/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {

	NSString* _extensionName;
	NSData* _extensionPayload;
	unsigned _typeCode;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasExtensionName; 
@property (nonatomic,retain) NSString * extensionName;                //@synthesize extensionName=_extensionName - In the implementation block
@property (assign,nonatomic) BOOL hasTypeCode; 
@property (assign,nonatomic) unsigned typeCode;                       //@synthesize typeCode=_typeCode - In the implementation block
@property (nonatomic,readonly) BOOL hasExtensionPayload; 
@property (nonatomic,retain) NSData * extensionPayload;               //@synthesize extensionPayload=_extensionPayload - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)typeCode;
-(void)setTypeCode:(unsigned)arg1 ;
-(NSString *)extensionName;
-(void)setExtensionName:(NSString *)arg1 ;
-(void)setExtensionPayload:(NSData *)arg1 ;
-(BOOL)hasExtensionName;
-(void)setHasTypeCode:(BOOL)arg1 ;
-(BOOL)hasTypeCode;
-(BOOL)hasExtensionPayload;
-(NSData *)extensionPayload;
@end

