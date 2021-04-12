/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIResponder;

@interface UIInputViewPostPinningReloadState : NSObject {

	UIResponder* _responderPreventedFromSettingInputViews;

}

@property (nonatomic,retain) UIResponder * responderToReload;              //@synthesize responderPreventedFromSettingInputViews=_responderPreventedFromSettingInputViews - In the implementation block
+(id)stateWithResponder:(id)arg1 ;
-(void)dealloc;
-(void)setResponderToReload:(UIResponder *)arg1 ;
-(UIResponder *)responderToReload;
@end

