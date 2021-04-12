/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isSuspended;
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(NSArray *)desiredButtons;
-(void)_updateApplicationButtonStatus;
-(void)setEnabled:(BOOL)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)activeButton;
-(long long)_captureButtonForPhysicalButtonType:(long long)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(void)setActiveButton:(long long)arg1 ;
-(long long)physicalButtonType;
@end

