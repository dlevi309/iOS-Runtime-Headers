/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@interface STShowActivityRequest : AFSiriRequest {

	long long _dataType;
	long long _view;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)dataType;
-(long long)view;
-(id)createResponse;
-(id)_initWithDataType:(long long)arg1 view:(long long)arg2 ;
@end

