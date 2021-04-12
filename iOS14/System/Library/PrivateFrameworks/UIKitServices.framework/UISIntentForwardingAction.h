/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <BaseBoard/BSAction.h>

@class INIntent, INIntentForwardingAction;

@interface UISIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;
	INIntentForwardingAction* _cachedIntentForwardingAction;

}

@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) INIntentForwardingAction * intentForwardingAction; 
-(INIntent *)intent;
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithIntentForwardingAction:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(INIntentForwardingAction *)intentForwardingAction;
@end

