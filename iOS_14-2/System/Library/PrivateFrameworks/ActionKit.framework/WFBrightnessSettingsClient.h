/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

