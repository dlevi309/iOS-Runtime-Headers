/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest {

	NSString* _message;
	BOOL _frontmost;

}
+(BOOL)supportsSecureCoding;
-(id)message;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 makeAppFrontmost:(BOOL)arg2 ;
-(BOOL)_makeAppFrontmost;
@end

