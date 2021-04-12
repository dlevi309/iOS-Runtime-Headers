/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest {

	NSArray* _infoKeys;

}

@property (nonatomic,copy) NSArray * infoKeys;              //@synthesize infoKeys=_infoKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)allPlatformSecurityInfoKeys;
+(id)iOSSecurityInfoKeys;
+(id)currentPlatformSecurityInfoKeys;
+(id)macOSSecurityInfoKeys;
+(id)tvOSSecurityInfoKeys;
+(id)watchOSSecurityInfoKeys;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)infoKeys;
-(void)setInfoKeys:(NSArray *)arg1 ;
@end

