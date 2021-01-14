/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, CKRecordZoneID;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
-(CKRecordZoneID *)zoneID;
-(id)init;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 zoneID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

