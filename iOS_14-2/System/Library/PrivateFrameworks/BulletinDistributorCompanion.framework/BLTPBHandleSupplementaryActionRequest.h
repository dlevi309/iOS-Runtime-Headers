/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBActionInformation, NSString;

@interface BLTPBHandleSupplementaryActionRequest : PBRequest <NSCopying> {

	BLTPBActionInformation* _actionInfo;
	NSString* _identifier;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;                   //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasActionInfo; 
@property (nonatomic,retain) BLTPBActionInformation * actionInfo;              //@synthesize actionInfo=_actionInfo - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)hasRecordID;
-(NSString *)sectionID;
-(void)setRecordID:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(BLTPBActionInformation *)actionInfo;
-(id)description;
-(void)setActionInfo:(BLTPBActionInformation *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(NSString *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)publisherBulletinID;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSectionID;
-(BOOL)hasPublisherBulletinID;
-(BOOL)hasActionInfo;
@end

