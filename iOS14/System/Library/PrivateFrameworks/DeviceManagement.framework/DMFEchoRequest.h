/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFEchoRequest : DMFTaskRequest {

	NSString* _echo;
	NSString* _resultStatus;

}

@property (nonatomic,copy) NSString * echo;                      //@synthesize echo=_echo - In the implementation block
@property (nonatomic,copy) NSString * resultStatus;              //@synthesize resultStatus=_resultStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setResultStatus:(NSString *)arg1 ;
-(NSString *)echo;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)resultStatus;
-(void)setEcho:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

