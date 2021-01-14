/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying> {

	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy) NSString * recordType; 
+(BOOL)supportsSecureCoding;
-(CKRecordZoneID *)zoneID;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

