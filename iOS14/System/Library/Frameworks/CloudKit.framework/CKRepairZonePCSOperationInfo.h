/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _zoneIDs;

}

@property (nonatomic,retain) NSArray * zoneIDs;              //@synthesize zoneIDs=_zoneIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)zoneIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setZoneIDs:(NSArray *)arg1 ;
@end

