/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@protocol UIScenePresenter;
@class SBMedusaHostedKeyboardWindowLevelAssertion, NSMutableArray;

@interface SBMedusaHostedKeyboardWindow : SBWindow {

	id<UIScenePresenter> _remoteHostedKeyboardScenePresenter;
	SBMedusaHostedKeyboardWindowLevelAssertion* _defaultWindowLevelAssertion;
	NSMutableArray* _windowLevelAssertions;

}

@property (nonatomic,retain) NSMutableArray * windowLevelAssertions;              //@synthesize windowLevelAssertions=_windowLevelAssertions - In the implementation block
+(BOOL)autorotates;
+(BOOL)_isSecure;
-(void)addWindowLevelAssertion:(id)arg1 ;
-(NSMutableArray *)windowLevelAssertions;
-(void)setWindowLevelAssertions:(NSMutableArray *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isActive;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)description;
-(void)_updateWindowLevel;
-(id)initWithKeyboardScene:(id)arg1 ;
-(id)newWindowLevelAssertionWithPriority:(unsigned long long)arg1 windowLevel:(double)arg2 ;
-(void)dealloc;
-(void)removeWindowLevelAssertion:(id)arg1 ;
@end

