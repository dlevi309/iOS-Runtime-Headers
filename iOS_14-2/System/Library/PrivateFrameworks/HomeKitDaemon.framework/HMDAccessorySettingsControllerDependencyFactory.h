/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDAccessorySettingsControllerDependencyFactory.h>

@protocol HMDAccessorySettingsControllerDependencyFactory
@required
-(id)timerWithReason:(long long)arg1 interval:(double)arg2;
-(id)settingModelForUpdateWithIdentifier:(id)arg1 parent:(id)arg2 value:(id)arg3 configNumber:(id)arg4;
-(id)createMessageHandlerWithQueue:(id)arg1 delegate:(id)arg2;
-(void)assertWithCondition:(BOOL)arg1 message:(id)arg2;

@end


@interface HMDAccessorySettingsControllerDependencyFactory : HMFObject <HMDAccessorySettingsControllerDependencyFactory>
-(id)timerWithReason:(long long)arg1 interval:(double)arg2 ;
-(id)settingModelForUpdateWithIdentifier:(id)arg1 parent:(id)arg2 value:(id)arg3 configNumber:(id)arg4 ;
-(id)createMessageHandlerWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)assertWithCondition:(BOOL)arg1 message:(id)arg2 ;
@end

