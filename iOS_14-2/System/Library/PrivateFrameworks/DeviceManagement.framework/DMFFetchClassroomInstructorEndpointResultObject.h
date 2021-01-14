/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject {

	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEndpoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

