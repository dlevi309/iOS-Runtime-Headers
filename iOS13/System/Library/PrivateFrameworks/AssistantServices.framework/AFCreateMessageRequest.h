/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface AFCreateMessageRequest : AFSiriRequest {

	STSiriMessage* _message;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)message;
-(id)_initWithMessage:(id)arg1 ;
-(id)createResponseWithMessageIdentifier:(id)arg1 ;
@end

