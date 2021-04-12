/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject {

	CLLocation* _location;

}

@property (nonatomic,copy,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

