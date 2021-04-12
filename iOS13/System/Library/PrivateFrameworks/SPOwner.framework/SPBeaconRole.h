/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRoleId:(long long)arg1 ;
-(long long)roleId;
-(id)initWithRoleId:(long long)arg1 ;
@end

