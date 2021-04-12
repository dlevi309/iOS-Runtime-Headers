/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setActiveButtons:(NSSet *)arg1 ;
-(BOOL)isSuspended;
-(long long)_captureButtonForPressType:(long long)arg1 ;
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(NSArray *)desiredButtons;
-(void)_updateApplicationButtonStatus;
-(NSSet *)activeButtons;
-(void)setEnabled:(BOOL)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setPressType:(long long)arg1 ;
-(long long)lastActiveButton;
-(void)reset;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)pressType;
-(void)setLastActiveButton:(long long)arg1 ;
@end

