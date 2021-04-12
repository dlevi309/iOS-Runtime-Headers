/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject <NSCopying> {

	CKRecordZoneID* _destinationZoneID;
	CKRecordZoneID* _sourceZoneID;

}

@property (nonatomic,retain) CKRecordZoneID * destinationZoneID;              //@synthesize destinationZoneID=_destinationZoneID - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * sourceZoneID;                   //@synthesize sourceZoneID=_sourceZoneID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecordZoneID *)sourceZoneID;
-(void)setSourceZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)destinationZoneID;
-(id)initWithDestinationZoneID:(id)arg1 sourceZoneID:(id)arg2 ;
-(id)initWithDestinationZoneID:(id)arg1 ;
-(void)setDestinationZoneID:(CKRecordZoneID *)arg1 ;
@end

