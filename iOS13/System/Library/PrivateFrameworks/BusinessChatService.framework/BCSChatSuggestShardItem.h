/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _PASBloomFilter, NSString, NSDate;

@interface BCSChatSuggestShardItem : NSObject <NSCopying, NSSecureCoding> {

	_PASBloomFilter* _bloomFilter;
	NSString* _bloomFilterString;
	long long _startIndex;
	long long _shardCount;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) _PASBloomFilter * bloomFilter;              //@synthesize bloomFilter=_bloomFilter - In the implementation block
@property (nonatomic,readonly) NSString * bloomFilterString;               //@synthesize bloomFilterString=_bloomFilterString - In the implementation block
@property (nonatomic,readonly) long long startIndex;                       //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) long long shardCount;                       //@synthesize shardCount=_shardCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(_PASBloomFilter *)bloomFilter;
-(long long)startIndex;
-(BOOL)containsValue:(long long)arg1 ;
-(id)initWithBloomFilter:(id)arg1 bloomFilterString:(id)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 expirationDate:(id)arg5 ;
-(long long)shardCount;
-(NSString *)bloomFilterString;
-(id)initWithBloomFilterString:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 expirationDate:(id)arg4 ;
-(id)initWithJSONObj:(id)arg1 ;
@end

