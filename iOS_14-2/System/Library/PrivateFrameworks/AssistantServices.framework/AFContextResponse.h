/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriResponse.h>

@class STSiriContext;

@interface AFContextResponse : AFSiriResponse {

	STSiriContext* _context;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 context:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_context;
@end

