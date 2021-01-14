/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud
*/


@class CKServerChangeToken, CKRecordZoneID, NSString;

@interface UARPiCloudZone : NSObject {

	CKServerChangeToken* _changeToken;
	CKRecordZoneID* _zoneID;
	NSString* _containerID;

}

@property (copy) CKRecordZoneID * zoneID;                        //@synthesize zoneID=_zoneID - In the implementation block
@property (copy) CKServerChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (copy) NSString * containerID;                         //@synthesize containerID=_containerID - In the implementation block
-(CKRecordZoneID *)zoneID;
-(NSString *)containerID;
-(void)setContainerID:(NSString *)arg1 ;
-(CKServerChangeToken *)changeToken;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithZoneID:(id)arg1 containerID:(id)arg2 ;
@end

