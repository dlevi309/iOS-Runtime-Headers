/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIMetricDescriptor.h>

@class NSString;

@interface TISettingValueDescriptor : TIMetricDescriptor {

	NSString* _settingName;

}

@property (retain) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
+(id)settingValueDescriptorWithMetricName:(id)arg1 settingName:(id)arg2 ;
-(void)setSettingName:(NSString *)arg1 ;
-(NSString *)settingName;
-(id)initWithMetricName:(id)arg1 settingName:(id)arg2 ;
@end

