/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFDecimalValueSetting.h>

@class NSString;

@interface WFBrightnessSettingsClient : WFSettingsClient <WFDecimalValueSetting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setValue:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

