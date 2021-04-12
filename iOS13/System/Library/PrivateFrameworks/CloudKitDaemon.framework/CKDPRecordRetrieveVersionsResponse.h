/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {

	NSMutableArray* _recordVersions;
	BOOL _isDeleted;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasIsDeleted; 
@property (assign,nonatomic) BOOL isDeleted;                               //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordVersions;              //@synthesize recordVersions=_recordVersions - In the implementation block
+(Class)recordVersionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isDeleted;
-(void)setIsDeleted:(BOOL)arg1 ;
-(void)addRecordVersions:(id)arg1 ;
-(unsigned long long)recordVersionsCount;
-(void)clearRecordVersions;
-(id)recordVersionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsDeleted:(BOOL)arg1 ;
-(BOOL)hasIsDeleted;
-(NSMutableArray *)recordVersions;
-(void)setRecordVersions:(NSMutableArray *)arg1 ;
@end

