/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMUser *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)setUser:(HMUser *)arg1 ;
-(unsigned long long)cachedHash;
@end

