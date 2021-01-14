/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetMaximumResidentUsersRequest : DMFTaskRequest {

	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setCount:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
@end

