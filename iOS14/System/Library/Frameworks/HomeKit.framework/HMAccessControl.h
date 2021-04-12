/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMUser;

@interface HMAccessControl : NSObject <NSSecureCoding> {

	HMFUnfairLock* _lock;
	HMUser* _user;
	unsigned long long _cachedHash;

}

@property (nonatomic,readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak) HMUser * user;                                          //@synthesize user=_user - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUser:(id)arg1 ;
-(id)init;
-(void)setUser:(HMUser *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HMUser *)user;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)cachedHash;
-(BOOL)isEqual:(id)arg1 ;
@end

