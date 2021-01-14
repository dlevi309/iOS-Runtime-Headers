/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboard.h>

@protocol UITextCursorAssertion;
@interface UIKeyboardAutomatic : UIKeyboard {

	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;               //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
+(id)activeInstance;
+(id)sharedInstance;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(void)maximize;
-(void)willResume:(id)arg1 ;
-(BOOL)showsCandidateBar;
-(void)didSuspend:(id)arg1 ;
-(void)minimize;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1 ;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)showsCandidateInline;
-(BOOL)isAutomatic;
-(id<UITextCursorAssertion>)blinkAssertion;
-(BOOL)isActive;
-(BOOL)_isAutomaticKeyboard;
-(void)activate;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)dealloc;
@end

