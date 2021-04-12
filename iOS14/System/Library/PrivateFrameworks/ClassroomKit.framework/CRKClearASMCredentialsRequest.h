/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKClearASMCredentialsRequest : CATTaskRequest {

	long long _role;
	long long _type;

}

@property (assign,nonatomic) long long role;              //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(long long)role;
@end

