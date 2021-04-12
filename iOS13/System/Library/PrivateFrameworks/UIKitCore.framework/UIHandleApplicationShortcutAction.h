/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,copy,readonly) UIApplicationShortcutItem * uiShortcutItem; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(long long)UIActionType;
-(UIApplicationShortcutItem *)uiShortcutItem;
-(id)initWithSBSShortcutItem:(id)arg1 ;
@end

