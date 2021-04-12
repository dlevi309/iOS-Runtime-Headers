/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIResponder;

@interface UIInputViewPostPinningReloadState : NSObject {

	UIResponder* _responderPreventedFromSettingInputViews;

}

@property (nonatomic,retain) UIResponder * responderToReload;              //@synthesize responderPreventedFromSettingInputViews=_responderPreventedFromSettingInputViews - In the implementation block
+(id)stateWithResponder:(id)arg1 ;
-(void)setResponderToReload:(UIResponder *)arg1 ;
-(UIResponder *)responderToReload;
-(void)dealloc;
@end

