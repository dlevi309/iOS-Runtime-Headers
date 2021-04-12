/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>

@interface STSettingChange : STSiriModelObject {

	long long _settingType;
	id _valueBeforeUpdate;
	id _valueAfterUpdate;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)settingType;
-(id)initWithSettingType:(long long)arg1 valueBeforeUpdate:(id)arg2 valueAfterUpdate:(id)arg3 ;
-(id)valueBeforeUpdate;
-(id)valueAfterUpdate;
-(id)initWithCoder:(id)arg1 ;
@end

