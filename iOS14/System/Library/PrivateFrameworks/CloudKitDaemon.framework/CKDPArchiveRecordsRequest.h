/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addIdsToArchive:(id)arg1 ;
-(unsigned long long)idsToArchivesCount;
-(void)clearIdsToArchives;
-(id)idsToArchiveAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)idsToArchives;
-(void)setIdsToArchives:(NSMutableArray *)arg1 ;
@end

