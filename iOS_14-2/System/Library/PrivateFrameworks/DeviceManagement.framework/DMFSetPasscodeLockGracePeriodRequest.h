/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest {

	double _seconds;

}

@property (assign,nonatomic) double seconds;              //@synthesize seconds=_seconds - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(double)seconds;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSeconds:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

