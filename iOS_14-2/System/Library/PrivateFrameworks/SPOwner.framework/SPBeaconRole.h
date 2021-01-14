/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding> {

	long long _roleId;

}

@property (assign,nonatomic) long long roleId;              //@synthesize roleId=_roleId - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)roleId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRoleId:(long long)arg1 ;
-(id)initWithRoleId:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

