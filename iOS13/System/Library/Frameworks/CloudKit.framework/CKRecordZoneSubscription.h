/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,copy) NSString * recordType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 ;
@end

