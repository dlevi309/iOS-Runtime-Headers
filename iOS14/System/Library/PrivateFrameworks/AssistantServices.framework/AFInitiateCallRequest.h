/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {

	STCall* _call;

}
+(BOOL)supportsSecureCoding;
-(id)call;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithCall:(id)arg1 ;
-(id)createResponse;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

