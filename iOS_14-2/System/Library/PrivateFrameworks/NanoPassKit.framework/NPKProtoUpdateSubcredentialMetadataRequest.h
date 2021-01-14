/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoUpdateSubcredentialMetadataRequest : PBRequest <NSCopying> {

	NSData* _credentialData;
	NSData* _passData;

}

@property (nonatomic,readonly) BOOL hasPassData; 
@property (nonatomic,retain) NSData * passData;                     //@synthesize passData=_passData - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialData; 
@property (nonatomic,retain) NSData * credentialData;               //@synthesize credentialData=_credentialData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)passData;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)credentialData;
-(void)setPassData:(NSData *)arg1 ;
-(BOOL)hasPassData;
-(void)setCredentialData:(NSData *)arg1 ;
-(BOOL)hasCredentialData;
@end

