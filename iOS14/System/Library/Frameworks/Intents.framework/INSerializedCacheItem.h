/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)serializeCacheableObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deserializeCacheItems:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deserializeCacheItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)payload;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 payload:(id)arg3 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

