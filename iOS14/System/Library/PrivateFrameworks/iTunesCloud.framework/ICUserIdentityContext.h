/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICUserIdentity, ICUserIdentityStore;

@interface ICUserIdentityContext : NSObject <NSCopying, NSSecureCoding> {

	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;

}

@property (nonatomic,readonly) ICUserIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;              //@synthesize identityStore=_identityStore - In the implementation block
+(BOOL)supportsSecureCoding;
-(ICUserIdentityStore *)identityStore;
-(ICUserIdentity *)identity;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

