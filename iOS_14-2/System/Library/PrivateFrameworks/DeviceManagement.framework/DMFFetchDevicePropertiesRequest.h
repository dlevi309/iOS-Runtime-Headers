/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest {

	NSArray* _propertyKeys;

}

@property (nonatomic,copy) NSArray * propertyKeys;              //@synthesize propertyKeys=_propertyKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(id)devicePropertyKeysForPlatform:(unsigned long long)arg1 ;
+(id)currentDevicePropertyKeys;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
@end

