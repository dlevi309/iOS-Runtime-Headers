/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)changeType;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPShare *)share;
-(void)setShare:(CKDPShare *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(BOOL)hasShare;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareIdentifier;
-(CKDPShareIdentifier *)shareIdentifier;
@end

