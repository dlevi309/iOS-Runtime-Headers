/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSXPCListenerEndpoint;

@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject {

	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithCoder:(id)arg1 ;
@end

