/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSDictionary;

@interface DMFSetAppConfigurationRequest : DMFAppRequest {

	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

