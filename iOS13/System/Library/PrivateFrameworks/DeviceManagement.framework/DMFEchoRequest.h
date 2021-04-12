/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)echo;
-(NSString *)resultStatus;
-(void)setEcho:(NSString *)arg1 ;
-(void)setResultStatus:(NSString *)arg1 ;
@end

