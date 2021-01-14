/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isDeleted;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addRecordVersions:(id)arg1 ;
-(unsigned long long)recordVersionsCount;
-(void)clearRecordVersions;
-(id)recordVersionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsDeleted:(BOOL)arg1 ;
-(BOOL)hasIsDeleted;
-(NSMutableArray *)recordVersions;
-(void)setRecordVersions:(NSMutableArray *)arg1 ;
@end

