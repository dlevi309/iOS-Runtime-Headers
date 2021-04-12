/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest {

	BOOL _forceDeletion;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL forceDeletion;              //@synthesize forceDeletion=_forceDeletion - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setUsername:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)username;
-(BOOL)forceDeletion;
-(void)setForceDeletion:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

