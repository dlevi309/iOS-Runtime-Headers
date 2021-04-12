/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bagKeySetCacheAccessQueue;
+(id)bagKeySetCache;
+(void)resetRegisteredBagKeySets;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)keys;
-(BOOL)hasKey:(id)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
@end

