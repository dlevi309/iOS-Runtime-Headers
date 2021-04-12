/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {

	NSURL* _draftMessageIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)message;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithDraftMessageIdentifier:(id)arg1 ;
-(id)draftMessageIdentifier;
-(id)createUsageResult;
@end

