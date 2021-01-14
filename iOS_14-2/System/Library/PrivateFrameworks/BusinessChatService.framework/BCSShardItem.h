/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSShardItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _PASBloomFilter, NSDate;

@interface BCSShardItem : NSObject <BCSShardItemProtocol, NSCopying, NSSecureCoding> {

	_PASBloomFilter* _bloomFilter;
	NSString* _bloomFilterString;
	long long _startIndex;
	long long _shardCount;
	NSDate* _expirationDate;
	long long _type;

}

@property (nonatomic,readonly) _PASBloomFilter * bloomFilter;              //@synthesize bloomFilter=_bloomFilter - In the implementation block
@property (nonatomic,retain) NSString * bloomFilterString;                 //@synthesize bloomFilterString=_bloomFilterString - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long startIndex;                       //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) long long shardCount;                       //@synthesize shardCount=_shardCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(long long)startIndex;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_PASBloomFilter *)bloomFilter;
-(NSString *)description;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)shardCount;
-(NSString *)bloomFilterString;
-(id)initWithBloomFilterString:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5 ;
-(id)initWithBloomFilter:(id)arg1 bloomFilterString:(id)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 type:(long long)arg5 expirationDate:(id)arg6 ;
-(BOOL)containsItemMatching:(id)arg1 ;
-(void)setBloomFilterString:(NSString *)arg1 ;
-(id)initWithBusinessLinkShardItem:(id)arg1 ;
-(id)initWithJSONObj:(id)arg1 type:(long long)arg2 ;
-(id)initWithRecord:(id)arg1 type:(long long)arg2 ;
@end

