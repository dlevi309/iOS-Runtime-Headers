/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject {

	NSDictionary* _lastLoginDatesByAppleID;

}

@property (nonatomic,copy) NSDictionary * lastLoginDatesByAppleID;              //@synthesize lastLoginDatesByAppleID=_lastLoginDatesByAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)lastLoginDatesByAppleID;
-(id)initWithDatesByAppleID:(id)arg1 ;
-(void)setLastLoginDatesByAppleID:(NSDictionary *)arg1 ;
@end

