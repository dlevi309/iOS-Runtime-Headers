/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface AFCreateMessageRequest : AFSiriRequest {

	STSiriMessage* _message;

}
+(BOOL)supportsSecureCoding;
-(id)message;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithMessage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)createResponseWithMessageIdentifier:(id)arg1 ;
@end

