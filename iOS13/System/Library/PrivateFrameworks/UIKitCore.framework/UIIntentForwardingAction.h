/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class INIntent;

@interface UIIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;

}

@property (nonatomic,readonly) INIntent * intent; 
-(INIntent *)intent;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

