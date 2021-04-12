/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class UIViewController;

@interface HUToolbarStateInstance : NSObject {

	UIViewController* _associatedViewController;
	id _backButtonTarget;
	SEL _backButtonSelector;
	id _settingsButtonTarget;
	SEL _settingsButtonSelector;

}

@property (nonatomic,retain) UIViewController * associatedViewController;              //@synthesize associatedViewController=_associatedViewController - In the implementation block
@property (nonatomic,retain) id backButtonTarget;                                      //@synthesize backButtonTarget=_backButtonTarget - In the implementation block
@property (assign,nonatomic) SEL backButtonSelector;                                   //@synthesize backButtonSelector=_backButtonSelector - In the implementation block
@property (nonatomic,retain) id settingsButtonTarget;                                  //@synthesize settingsButtonTarget=_settingsButtonTarget - In the implementation block
@property (assign,nonatomic) SEL settingsButtonSelector;                               //@synthesize settingsButtonSelector=_settingsButtonSelector - In the implementation block
-(id)description;
-(id)initWithViewController:(id)arg1 ;
-(void)setAssociatedViewController:(UIViewController *)arg1 ;
-(UIViewController *)associatedViewController;
-(id)backButtonTarget;
-(SEL)backButtonSelector;
-(id)settingsButtonTarget;
-(SEL)settingsButtonSelector;
-(void)setBackButtonTarget:(id)arg1 ;
-(void)setBackButtonSelector:(SEL)arg1 ;
-(void)setSettingsButtonTarget:(id)arg1 ;
-(void)setSettingsButtonSelector:(SEL)arg1 ;
@end

