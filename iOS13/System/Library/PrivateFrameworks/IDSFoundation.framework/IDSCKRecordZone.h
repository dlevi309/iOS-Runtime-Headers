/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	IDSCKRecordZoneID* _zoneID;

}

@property (nonatomic,readonly) IDSCKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(id)alloc;
+(Class)__class;
-(IDSCKRecordZoneID *)zoneID;
@end

