/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage {

	NSString* _settingName;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
@property (nonatomic,readonly) NSString * value;                    //@synthesize value=_value - In the implementation block
+(id)feedbackType;
-(NSString *)settingName;
-(NSString *)value;
-(id)serverMessage;
-(id)initWithSetting:(id)arg1 value:(id)arg2 ;
@end

