/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)value;
-(id)serverMessage;
-(id)initWithSetting:(id)arg1 value:(id)arg2 ;
-(NSString *)settingName;
@end

