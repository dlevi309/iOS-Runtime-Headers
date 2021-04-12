/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate, CKRecordZoneID;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) NSString * recordType; 
@property (nonatomic,copy,readonly) NSPredicate * predicate; 
@property (nonatomic,copy) CKRecordZoneID * zoneID; 
@property (nonatomic,readonly) unsigned long long querySubscriptionOptions; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)querySubscriptionOptions;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
@end

