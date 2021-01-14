/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {

	STSiriMessage* _message;
	BOOL _showAsDraft;

}
+(BOOL)supportsSecureCoding;
-(id)message;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(BOOL)showAsDraft;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_makeAppFrontmost;
-(id)_initWithMessage:(id)arg1 showAsDraft:(BOOL)arg2 ;
@end

