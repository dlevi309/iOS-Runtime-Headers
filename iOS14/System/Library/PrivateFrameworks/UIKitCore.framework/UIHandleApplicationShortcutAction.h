/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,copy,readonly) UIApplicationShortcutItem * uiShortcutItem; 
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSBSShortcutItem:(id)arg1 ;
-(UIApplicationShortcutItem *)uiShortcutItem;
@end

