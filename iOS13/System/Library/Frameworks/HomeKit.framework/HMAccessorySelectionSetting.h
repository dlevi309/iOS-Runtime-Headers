/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)items;
-(id)initWithInternal:(id)arg1 ;
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 items:(id)arg4 ;
-(void)addItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

