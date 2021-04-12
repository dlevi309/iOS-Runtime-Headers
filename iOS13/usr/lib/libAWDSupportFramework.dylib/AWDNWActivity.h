/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDNWDeviceReport, AWDNWL2Report;

@interface AWDNWActivity : PBCodable <NSCopying> {

	unsigned long long _activityDomain;
	unsigned long long _activityLabel;
	unsigned long long _timestamp;
	NSString* _activityUUID;
	AWDNWDeviceReport* _deviceReport;
	AWDNWL2Report* _l2Report;
	NSString* _parentActivityUUID;
	BOOL _isRetry;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityDomain; 
@property (assign,nonatomic) unsigned long long activityDomain;              //@synthesize activityDomain=_activityDomain - In the implementation block
@property (assign,nonatomic) BOOL hasActivityLabel; 
@property (assign,nonatomic) unsigned long long activityLabel;               //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityUUID; 
@property (nonatomic,retain) NSString * activityUUID;                        //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasParentActivityUUID; 
@property (nonatomic,retain) NSString * parentActivityUUID;                  //@synthesize parentActivityUUID=_parentActivityUUID - In the implementation block
@property (assign,nonatomic) BOOL hasIsRetry; 
@property (assign,nonatomic) BOOL isRetry;                                   //@synthesize isRetry=_isRetry - In the implementation block
@property (nonatomic,readonly) BOOL hasL2Report; 
@property (nonatomic,retain) AWDNWL2Report * l2Report;                       //@synthesize l2Report=_l2Report - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceReport; 
@property (nonatomic,retain) AWDNWDeviceReport * deviceReport;               //@synthesize deviceReport=_deviceReport - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActivityUUID:(NSString *)arg1 ;
-(NSString *)activityUUID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasL2Report;
-(BOOL)hasDeviceReport;
-(AWDNWL2Report *)l2Report;
-(void)setL2Report:(AWDNWL2Report *)arg1 ;
-(AWDNWDeviceReport *)deviceReport;
-(void)setDeviceReport:(AWDNWDeviceReport *)arg1 ;
-(void)setActivityDomain:(unsigned long long)arg1 ;
-(void)setHasActivityDomain:(BOOL)arg1 ;
-(BOOL)hasActivityDomain;
-(void)setActivityLabel:(unsigned long long)arg1 ;
-(void)setHasActivityLabel:(BOOL)arg1 ;
-(BOOL)hasActivityLabel;
-(BOOL)hasActivityUUID;
-(BOOL)hasParentActivityUUID;
-(void)setIsRetry:(BOOL)arg1 ;
-(void)setHasIsRetry:(BOOL)arg1 ;
-(BOOL)hasIsRetry;
-(unsigned long long)activityDomain;
-(unsigned long long)activityLabel;
-(NSString *)parentActivityUUID;
-(void)setParentActivityUUID:(NSString *)arg1 ;
-(BOOL)isRetry;
@end

