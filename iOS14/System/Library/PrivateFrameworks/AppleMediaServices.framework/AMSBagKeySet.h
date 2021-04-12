/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSSet* _keys;

}

@property (nonatomic,readonly) NSSet * keys;                          //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3 ;
+(id)registeredBagKeySetForProfile:(id)arg1 profileVersion:(id)arg2 ;
+(id)bagKeySetCache;
+(id)bagKeySetCacheAccessQueue;
+(void)resetRegisteredBagKeySets;
-(NSSet *)keys;
-(BOOL)hasKey:(id)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

