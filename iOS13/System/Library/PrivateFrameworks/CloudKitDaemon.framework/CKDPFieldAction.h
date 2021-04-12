/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable <NSCopying> {

	CKDPFieldActionDeleteListRange* _deleteListRange;
	CKDPFieldActionInsertIntoList* _insertIntoList;
	CKDPFieldActionReplaceListRange* _replaceListRange;

}

@property (nonatomic,readonly) BOOL hasInsertIntoList; 
@property (nonatomic,retain) CKDPFieldActionInsertIntoList * insertIntoList;                  //@synthesize insertIntoList=_insertIntoList - In the implementation block
@property (nonatomic,readonly) BOOL hasDeleteListRange; 
@property (nonatomic,retain) CKDPFieldActionDeleteListRange * deleteListRange;                //@synthesize deleteListRange=_deleteListRange - In the implementation block
@property (nonatomic,readonly) BOOL hasReplaceListRange; 
@property (nonatomic,retain) CKDPFieldActionReplaceListRange * replaceListRange;              //@synthesize replaceListRange=_replaceListRange - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInsertIntoList:(CKDPFieldActionInsertIntoList *)arg1 ;
-(void)setReplaceListRange:(CKDPFieldActionReplaceListRange *)arg1 ;
-(void)setDeleteListRange:(CKDPFieldActionDeleteListRange *)arg1 ;
-(BOOL)hasInsertIntoList;
-(BOOL)hasDeleteListRange;
-(BOOL)hasReplaceListRange;
-(CKDPFieldActionInsertIntoList *)insertIntoList;
-(CKDPFieldActionDeleteListRange *)deleteListRange;
-(CKDPFieldActionReplaceListRange *)replaceListRange;
@end

