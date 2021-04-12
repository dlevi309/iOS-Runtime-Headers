/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@interface STShowActivityRequest : AFSiriRequest {

	long long _dataType;
	long long _view;

}
+(BOOL)supportsSecureCoding;
-(long long)dataType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(long long)view;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithDataType:(long long)arg1 view:(long long)arg2 ;
@end

