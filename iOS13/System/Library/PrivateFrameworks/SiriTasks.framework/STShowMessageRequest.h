/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {

	STSiriMessage* _message;
	BOOL _showAsDraft;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)message;
-(id)createResponse;
-(BOOL)_makeAppFrontmost;
-(BOOL)showAsDraft;
-(id)_initWithMessage:(id)arg1 showAsDraft:(BOOL)arg2 ;
@end

