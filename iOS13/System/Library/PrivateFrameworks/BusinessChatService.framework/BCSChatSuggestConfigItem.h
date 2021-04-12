/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface BCSChatSuggestConfigItem : NSObject <NSCopying, NSSecureCoding> {

	long long _buckets;
	long long _shards;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) long long buckets;                         //@synthesize buckets=_buckets - In the implementation block
@property (nonatomic,readonly) long long shards;                          //@synthesize shards=_shards - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(long long)buckets;
-(long long)shards;
-(id)initWithJSONObj:(id)arg1 ;
-(id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 ;
@end

