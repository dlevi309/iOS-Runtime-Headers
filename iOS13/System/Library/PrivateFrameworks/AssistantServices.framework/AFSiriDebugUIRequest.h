/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest {

	NSString* _message;
	BOOL _frontmost;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)message;
-(id)createResponse;
-(id)initWithMessage:(id)arg1 makeAppFrontmost:(BOOL)arg2 ;
-(BOOL)_makeAppFrontmost;
@end

