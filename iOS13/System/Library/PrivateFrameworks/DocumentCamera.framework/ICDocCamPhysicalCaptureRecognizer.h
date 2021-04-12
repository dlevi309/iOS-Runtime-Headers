/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSArray;

@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer {

	BOOL _suspended;
	long long _activeButton;
	NSArray* _desiredButtons;
	long long _physicalButtonType;

}

@property (assign,nonatomic) long long physicalButtonType;                   //@synthesize physicalButtonType=_physicalButtonType - In the implementation block
@property (assign,nonatomic) long long activeButton;                         //@synthesize activeButton=_activeButton - In the implementation block
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
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)_updateApplicationButtonStatus;
-(NSArray *)desiredButtons;
-(long long)activeButton;
-(long long)_captureButtonForPhysicalButtonType:(long long)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(void)setActiveButton:(long long)arg1 ;
-(long long)physicalButtonType;
@end

