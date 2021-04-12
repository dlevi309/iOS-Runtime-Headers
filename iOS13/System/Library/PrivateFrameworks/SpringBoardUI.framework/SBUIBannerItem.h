/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@interface SBUIBannerItem : NSObject
-(id)title;
-(unsigned long long)priority;
-(/*^block*/id)action;
-(id)message;
-(id)sound;
-(id)sortDate;
-(BOOL)isSticky;
-(id)subActions;
-(id)actionWithIdentifier:(id)arg1 ;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)canShowInAssistant;
-(BOOL)canShowWhileLocked;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(BOOL)hasSubActions;
-(id)defaultActionWithContext:(id)arg1 ;
-(id)lockScreenActionContextWithContext:(id)arg1 ;
@end

