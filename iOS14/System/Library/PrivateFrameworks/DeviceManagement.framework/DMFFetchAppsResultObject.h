/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchAppsResultObject : CATTaskResultObject {

	NSDictionary* _appsByBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * appsByBundleIdentifier;              //@synthesize appsByBundleIdentifier=_appsByBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)appsByBundleIdentifier;
-(id)initWithAppsByBundleIdentifier:(id)arg1 ;
@end

