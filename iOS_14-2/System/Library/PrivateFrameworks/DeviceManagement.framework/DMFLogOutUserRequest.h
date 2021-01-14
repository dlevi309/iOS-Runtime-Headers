/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFLogOutUserRequest : DMFTaskRequest {

	BOOL _forceLogout;

}

@property (assign,nonatomic) BOOL forceLogout;              //@synthesize forceLogout=_forceLogout - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)forceLogout;
-(void)setForceLogout:(BOOL)arg1 ;
@end

