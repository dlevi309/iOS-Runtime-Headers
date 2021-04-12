/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet, NSArray;

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer {

	BOOL _suspended;
	NSSet* _activeButtons;
	long long _lastActiveButton;
	NSArray* _desiredButtons;
	long long _pressType;

}

@property (assign,nonatomic) long long pressType;                            //@synthesize pressType=_pressType - In the implementation block
@property (assign,nonatomic) long long lastActiveButton;                     //@synthesize lastActiveButton=_lastActiveButton - In the implementation block
@property (nonatomic,copy) NSSet * activeButtons;                            //@synthesize activeButtons=_activeButtons - In the implementation block
@property (nonatomic,copy) NSArray * desiredButtons;                         //@synthesize desiredButtons=_desiredButtons - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)pressType;
-(void)setPressType:(long long)arg1 ;
-(long long)lastActiveButton;
-(void)setActiveButtons:(NSSet *)arg1 ;
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)_updateApplicationButtonStatus;
-(NSArray *)desiredButtons;
-(NSSet *)activeButtons;
-(long long)_captureButtonForPressType:(long long)arg1 ;
-(void)setLastActiveButton:(long long)arg1 ;
@end

