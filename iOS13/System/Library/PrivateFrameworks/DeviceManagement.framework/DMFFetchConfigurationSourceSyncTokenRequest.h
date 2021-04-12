/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)configurationSource;
-(void)setConfigurationSource:(NSString *)arg1 ;
@end

