/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)passData;
-(NSData *)credentialData;
-(void)setPassData:(NSData *)arg1 ;
-(BOOL)hasPassData;
-(void)setCredentialData:(NSData *)arg1 ;
-(BOOL)hasCredentialData;
@end

