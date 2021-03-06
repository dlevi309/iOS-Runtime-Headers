/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessorySetting.h>
#import <libobjc.A.dylib/_HMAccesorySettingDelegate.h>

@class NSArray, NSString;

@interface HMAccessorySelectionSetting : HMAccessorySetting <_HMAccesorySettingDelegate>

@property (copy,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInternal:(id)arg1 ;
-(NSArray *)items;
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(void)addItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 items:(id)arg4 ;
-(void)removeItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

