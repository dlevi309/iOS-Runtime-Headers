/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPShare, CKDPShareIdentifier;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying> {

	int _changeType;
	CKDPShare* _share;
	CKDPShareIdentifier* _shareIdentifier;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasShareIdentifier; 
@property (nonatomic,retain) CKDPShareIdentifier * shareIdentifier;              //@synthesize shareIdentifier=_shareIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                                     //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;                                  //@synthesize share=_share - In the implementation block
-(id)dictionaryRepresentation;
-(void)setChangeType:(int)arg1 ;
-(CKDPShare *)share;
-(int)changeType;
-(BOOL)hasChangeType;
-(void)mergeFrom:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(void)setShare:(CKDPShare *)arg1 ;
-(id)description;
-(int)StringAsChangeType:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasShare;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareIdentifier;
-(CKDPShareIdentifier *)shareIdentifier;
@end

