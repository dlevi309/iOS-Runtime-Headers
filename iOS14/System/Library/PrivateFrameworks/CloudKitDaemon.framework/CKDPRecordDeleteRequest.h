/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, CKDPRecordIdentifier;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {

	NSString* _etag;
	NSMutableArray* _pluginFields;
	NSMutableArray* _publicKeys;
	CKDPRecordIdentifier* _recordIdentifier;
	BOOL _participantKeyLost;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSMutableArray * pluginFields;                        //@synthesize pluginFields=_pluginFields - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantKeyLost; 
@property (assign,nonatomic) BOOL participantKeyLost;                              //@synthesize participantKeyLost=_participantKeyLost - In the implementation block
@property (nonatomic,retain) NSMutableArray * publicKeys;                          //@synthesize publicKeys=_publicKeys - In the implementation block
+(id)options;
+(Class)pluginFieldsType;
+(Class)publicKeysType;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(CKDPRecordIdentifier *)recordIdentifier;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRecordIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)pluginFields;
-(void)setPluginFields:(NSMutableArray *)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)addPluginFields:(id)arg1 ;
-(unsigned long long)pluginFieldsCount;
-(void)clearPluginFields;
-(id)pluginFieldsAtIndex:(unsigned long long)arg1 ;
-(void)addPublicKeys:(id)arg1 ;
-(unsigned long long)publicKeysCount;
-(void)clearPublicKeys;
-(id)publicKeysAtIndex:(unsigned long long)arg1 ;
-(void)setParticipantKeyLost:(BOOL)arg1 ;
-(void)setHasParticipantKeyLost:(BOOL)arg1 ;
-(BOOL)hasParticipantKeyLost;
-(BOOL)participantKeyLost;
-(NSMutableArray *)publicKeys;
-(void)setPublicKeys:(NSMutableArray *)arg1 ;
@end

