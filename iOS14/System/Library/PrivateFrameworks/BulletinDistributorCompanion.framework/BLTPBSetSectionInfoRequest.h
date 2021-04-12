/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BLTPBSectionInfo *)sectionInfo;
-(void)setSectionInfo:(BLTPBSectionInfo *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSectionInfo;
@end

