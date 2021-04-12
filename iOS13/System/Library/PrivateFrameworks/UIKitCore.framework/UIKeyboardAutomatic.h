/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboard.h>

@interface UIKeyboardAutomatic : UIKeyboard {

	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	BOOL caretBlinks;

}

@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
@property (assign,nonatomic) BOOL caretBlinks; 
+(id)sharedInstance;
+(id)activeInstance;
-(void)dealloc;
-(BOOL)isActive;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)showsCandidateBar;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(void)activate;
-(void)willResume:(id)arg1 ;
-(void)minimize;
-(void)maximize;
-(void)didSuspend:(id)arg1 ;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(BOOL)isAutomatic;
-(BOOL)caretBlinks;
-(BOOL)showsCandidateInline;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(BOOL)_isAutomaticKeyboard;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1 ;
@end

