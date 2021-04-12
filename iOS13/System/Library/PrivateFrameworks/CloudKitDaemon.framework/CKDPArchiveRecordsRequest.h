/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying> {

	NSMutableArray* _idsToArchives;

}

@property (nonatomic,retain) NSMutableArray * idsToArchives;              //@synthesize idsToArchives=_idsToArchives - In the implementation block
+(id)options;
+(Class)idsToArchiveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addIdsToArchive:(id)arg1 ;
-(unsigned long long)idsToArchivesCount;
-(void)clearIdsToArchives;
-(id)idsToArchiveAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)idsToArchives;
-(void)setIdsToArchives:(NSMutableArray *)arg1 ;
@end

