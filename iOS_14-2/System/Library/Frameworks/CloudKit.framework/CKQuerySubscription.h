/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, CKRecordZoneID, NSString;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying> {

	NSPredicate* _predicate;
	CKRecordZoneID* _zoneID;
	unsigned long long _querySubscriptionOptions;

}

@property (nonatomic,copy) NSPredicate * predicate;                                    //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) unsigned long long querySubscriptionOptions;              //@synthesize querySubscriptionOptions=_querySubscriptionOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordType; 
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                    //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
-(CKRecordZoneID *)zoneID;
-(unsigned long long)querySubscriptionOptions;
-(NSPredicate *)predicate;
-(void)_validateQuerySubscriptionOptions:(unsigned long long)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(void)setRecordType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuerySubscriptionOptions:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

