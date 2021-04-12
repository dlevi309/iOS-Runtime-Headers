/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBSectionInfo;

@interface BLTPBSetSectionInfoRequest : PBRequest <NSCopying> {

	BLTPBSectionInfo* _sectionInfo;

}

@property (nonatomic,readonly) BOOL hasSectionInfo; 
@property (nonatomic,retain) BLTPBSectionInfo * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BLTPBSectionInfo *)sectionInfo;
-(void)setSectionInfo:(BLTPBSectionInfo *)arg1 ;
-(BOOL)hasSectionInfo;
@end

