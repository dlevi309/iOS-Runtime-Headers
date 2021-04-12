/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSEditingPane.h>

@class MCQuestionView, UITransitionView;

@interface MCQuestionPane : PSEditingPane {

	MCQuestionView* _questionView;
	UITransitionView* _transitionView;
	double _navigationBarHeight;
	double _statusBarHeight;

}

@property (assign,nonatomic) double navigationBarHeight;              //@synthesize navigationBarHeight=_navigationBarHeight - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                  //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
-(void)setProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)statusBarHeight;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 ;
-(BOOL)requiresKeyboard;
-(void)viewDidBecomeVisible;
-(double)navigationBarHeight;
-(void)disableInputField;
-(void)enableInputField;
-(void)_slide:(int)arg1 toQuestionWithProperties:(id)arg2 ;
-(void)_updateInPlaceWithProperties:(id)arg1 ;
-(id)responseValue;
-(void)setProperties:(id)arg1 withStyle:(int)arg2 ;
-(void)setNavigationBarHeight:(double)arg1 ;
@end

