/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {

	STCall* _call;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)call;
-(id)createResponse;
-(id)_initWithCall:(id)arg1 ;
@end

