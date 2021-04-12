/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIUserModelMetricsDescriptor.h>

@class NSString;

@interface TIUserModelSettingValueDescriptor : TIUserModelMetricsDescriptor {

	NSString* _settingName;

}

@property (retain) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
+(id)configureSettingsValueDescriptors;
-(NSString *)settingName;
-(id)initWithValueName:(id)arg1 settingName:(id)arg2 ;
-(void)setSettingName:(NSString *)arg1 ;
@end

