/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPProtectionInfo, CKDPShareIdentifier;

@interface CKDPShareAcceptRequest : PBRequest <NSCopying> {

	NSString* _etag;
	NSString* _participantId;
	CKDPProtectionInfo* _protectionInfo;
	CKDPProtectionInfo* _publicKey;
	int _publicKeyVersion;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;
	BOOL _acceptedInProcess;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                    //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;                //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKey; 
@property (nonatomic,retain) CKDPProtectionInfo * publicKey;                   //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) NSString * participantId;                         //@synthesize participantId=_participantId - In the implementation block
@property (assign,nonatomic) BOOL hasPublicKeyVersion; 
@property (assign,nonatomic) int publicKeyVersion;                             //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptedInProcess; 
@property (assign,nonatomic) BOOL acceptedInProcess;                           //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(CKDPProtectionInfo *)publicKey;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(int)publicKeyVersion;
-(void)setPublicKeyVersion:(int)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setPublicKey:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasProtectionInfo;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setParticipantId:(NSString *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasSelfAddedPcs;
-(BOOL)hasPublicKey;
-(BOOL)hasParticipantId;
-(void)setHasPublicKeyVersion:(BOOL)arg1 ;
-(BOOL)hasPublicKeyVersion;
-(void)setHasAcceptedInProcess:(BOOL)arg1 ;
-(BOOL)hasAcceptedInProcess;
-(CKDPProtectionInfo *)selfAddedPcs;
-(NSString *)participantId;
@end

