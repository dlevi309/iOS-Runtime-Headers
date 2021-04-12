/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ICUserIdentity *)identity;
-(ICUserIdentityStore *)identityStore;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 ;
@end

