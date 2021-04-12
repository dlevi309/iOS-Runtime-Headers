/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriResponse.h>

@interface STGenericIntentResponse : AFSiriResponse {

	long long _responseCode;

}

@property (assign,nonatomic) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)responseCode;
-(void)setResponseCode:(long long)arg1 ;
@end

