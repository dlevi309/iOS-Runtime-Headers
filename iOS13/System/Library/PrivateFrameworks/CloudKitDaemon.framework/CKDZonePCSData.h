/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSData, CKDSharePCSData, CKRecordID;

@interface CKDZonePCSData : CKDPCSData <NSSecureCoding, NSCopying> {

	OpaquePCSShareProtectionRef _zoneishPCS;
	CKRecordZoneID* _zoneID;
	NSData* _zoneishPCSData;
	NSData* _zoneishPublicKeyID;
	CKDSharePCSData* _sharePCSData;
	CKRecordID* _shareID;

}

@property (nonatomic,retain) CKRecordID * shareID;                                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                             //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSData * zoneishPublicKeyID;                         //@synthesize zoneishPublicKeyID=_zoneishPublicKeyID - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef zoneishPCS; 
@property (nonatomic,copy) NSData * zoneishPCSData;                               //@synthesize zoneishPCSData=_zoneishPCSData - In the implementation block
@property (nonatomic,retain) CKDSharePCSData * sharePCSData;                      //@synthesize sharePCSData=_sharePCSData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithZone:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)itemID;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(id)initWithZone:(id)arg1 ;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(OpaquePCSShareProtectionRef)zoneishPCS;
-(NSData *)zoneishPCSData;
-(NSData *)zoneishPublicKeyID;
-(void)setZoneishPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(CKDSharePCSData *)sharePCSData;
-(void)setZoneishPublicKeyID:(NSData *)arg1 ;
-(void)setZoneishPCSData:(NSData *)arg1 ;
@end

