/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBWillSendLightsAndSirensRequest : PBRequest <NSCopying> {

	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;
	BOOL _systemApp;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) BOOL hasSystemApp; 
@property (assign,nonatomic) BOOL systemApp;                              //@synthesize systemApp=_systemApp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)recordID;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(BOOL)hasRecordID;
-(NSString *)publisherBulletinID;
-(void)setSystemApp:(BOOL)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(BOOL)hasSectionID;
-(BOOL)hasPublisherBulletinID;
-(BOOL)systemApp;
-(BOOL)hasSystemApp;
-(void)setHasSystemApp:(BOOL)arg1 ;
@end

