/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSExpiring.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber, NSString;

@interface BCSConfigItem : NSObject <BCSExpiring, NSCopying, NSSecureCoding> {

	long long _buckets;
	long long _shards;
	NSDate* _expirationDate;
	NSNumber* _itemTTL;

}

@property (nonatomic,readonly) long long buckets;                          //@synthesize buckets=_buckets - In the implementation block
@property (nonatomic,readonly) long long shards;                           //@synthesize shards=_shards - In the implementation block
@property (nonatomic,readonly) NSNumber * itemTTL;                         //@synthesize itemTTL=_itemTTL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keysRequestedForCloudKitFetch;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)buckets;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(long long)shards;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)itemTTL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSONObj:(id)arg1 ;
-(id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 ;
-(id)_extractItemTTLFromConfigRecord:(id)arg1 ;
-(id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 itemTTL:(id)arg4 ;
@end

