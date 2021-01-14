/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDNWDeviceReport, AWDNWL2Report;

@interface AWDNWActivity : PBCodable <NSCopying> {

	unsigned long long _activityDomain;
	unsigned long long _activityLabel;
	unsigned long long _investigationID;
	unsigned long long _timestamp;
	NSString* _activityUUID;
	NSString* _bundleID;
	AWDNWDeviceReport* _deviceReport;
	AWDNWL2Report* _l2Report;
	NSString* _parentActivityUUID;
	BOOL _isRetry;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityDomain; 
@property (assign,nonatomic) unsigned long long activityDomain;               //@synthesize activityDomain=_activityDomain - In the implementation block
@property (assign,nonatomic) BOOL hasActivityLabel; 
@property (assign,nonatomic) unsigned long long activityLabel;                //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityUUID; 
@property (nonatomic,retain) NSString * activityUUID;                         //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasParentActivityUUID; 
@property (nonatomic,retain) NSString * parentActivityUUID;                   //@synthesize parentActivityUUID=_parentActivityUUID - In the implementation block
@property (assign,nonatomic) BOOL hasIsRetry; 
@property (assign,nonatomic) BOOL isRetry;                                    //@synthesize isRetry=_isRetry - In the implementation block
@property (nonatomic,readonly) BOOL hasL2Report; 
@property (nonatomic,retain) AWDNWL2Report * l2Report;                        //@synthesize l2Report=_l2Report - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceReport; 
@property (nonatomic,retain) AWDNWDeviceReport * deviceReport;                //@synthesize deviceReport=_deviceReport - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasInvestigationID; 
@property (assign,nonatomic) unsigned long long investigationID;              //@synthesize investigationID=_investigationID - In the implementation block
-(AWDNWL2Report *)l2Report;
-(BOOL)hasDeviceReport;
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(NSString *)activityUUID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setL2Report:(AWDNWL2Report *)arg1 ;
-(unsigned long long)timestamp;
-(void)setActivityUUID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isRetry;
-(BOOL)hasIsRetry;
-(void)setIsRetry:(BOOL)arg1 ;
-(unsigned long long)activityLabel;
-(void)setActivityDomain:(unsigned long long)arg1 ;
-(void)setHasActivityDomain:(BOOL)arg1 ;
-(BOOL)hasActivityDomain;
-(void)setActivityLabel:(unsigned long long)arg1 ;
-(void)setHasActivityLabel:(BOOL)arg1 ;
-(BOOL)hasActivityLabel;
-(BOOL)hasActivityUUID;
-(void)setHasIsRetry:(BOOL)arg1 ;
-(BOOL)hasParentActivityUUID;
-(void)setInvestigationID:(unsigned long long)arg1 ;
-(void)setHasInvestigationID:(BOOL)arg1 ;
-(BOOL)hasInvestigationID;
-(unsigned long long)activityDomain;
-(NSString *)parentActivityUUID;
-(void)setParentActivityUUID:(NSString *)arg1 ;
-(unsigned long long)investigationID;
-(id)description;
-(AWDNWDeviceReport *)deviceReport;
-(void)setDeviceReport:(AWDNWDeviceReport *)arg1 ;
-(NSString *)bundleID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasL2Report;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

