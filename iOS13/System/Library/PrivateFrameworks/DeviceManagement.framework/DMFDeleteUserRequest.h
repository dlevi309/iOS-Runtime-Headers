/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)forceDeletion;
-(void)setForceDeletion:(BOOL)arg1 ;
@end

