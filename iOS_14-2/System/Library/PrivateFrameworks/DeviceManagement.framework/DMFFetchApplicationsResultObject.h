/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject {

	NSDictionary* _applicationsByIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * applicationsByIdentifier;              //@synthesize applicationsByIdentifier=_applicationsByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)applicationsByIdentifier;
-(id)initWithApplicationsByIdentifier:(id)arg1 ;
@end

