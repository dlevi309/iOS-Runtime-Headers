/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject {

	NSDictionary* _applicationsByIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * applicationsByIdentifier;              //@synthesize applicationsByIdentifier=_applicationsByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)applicationsByIdentifier;
-(id)initWithApplicationsByIdentifier:(id)arg1 ;
@end

