/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSettingType:(long long)arg1 valueBeforeUpdate:(id)arg2 valueAfterUpdate:(id)arg3 ;
-(long long)settingType;
-(id)valueBeforeUpdate;
-(id)valueAfterUpdate;
@end

