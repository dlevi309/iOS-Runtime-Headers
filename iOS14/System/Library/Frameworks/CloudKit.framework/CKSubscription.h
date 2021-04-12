/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying> {

	NSString* _subscriptionID;
	long long _subscriptionType;
	CKNotificationInfo* _notificationInfo;
	NSString* _recordType;

}

@property (nonatomic,copy) NSString * recordType;                              //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSString * subscriptionID;                          //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (assign,nonatomic) long long subscriptionType;                       //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (nonatomic,copy) CKNotificationInfo * notificationInfo;              //@synthesize notificationInfo=_notificationInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2 ;
-(id)zoneID;
-(id)predicate;
-(id)init;
-(NSString *)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)subscriptionType;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
-(NSString *)subscriptionID;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
-(CKNotificationInfo *)notificationInfo;
-(unsigned long long)subscriptionOptions;
-(id)_initWithSubscriptionID:(id)arg1 subscriptionType:(long long)arg2 recordType:(id)arg3 ;
-(void)setSubscriptionType:(long long)arg1 ;
-(id)description;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(void)setRecordType:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

