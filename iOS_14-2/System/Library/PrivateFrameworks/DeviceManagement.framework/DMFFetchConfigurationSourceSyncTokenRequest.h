/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest {

	NSString* _configurationSource;

}

@property (nonatomic,copy) NSString * configurationSource;              //@synthesize configurationSource=_configurationSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)configurationSource;
-(id)initWithCoder:(id)arg1 ;
-(void)setConfigurationSource:(NSString *)arg1 ;
@end

