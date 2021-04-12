/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest {

	NSArray* _infoKeys;

}

@property (nonatomic,copy) NSArray * infoKeys;              //@synthesize infoKeys=_infoKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
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

