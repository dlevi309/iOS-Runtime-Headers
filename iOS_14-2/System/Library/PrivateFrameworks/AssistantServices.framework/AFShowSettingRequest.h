/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@interface AFShowSettingRequest : AFSiriRequest {

	long long _settingType;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(long long)settingType;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithSettingType:(long long)arg1 ;
@end

