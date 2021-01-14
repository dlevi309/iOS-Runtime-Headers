/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@protocol UITextCursorAssertion;
@class UITextRange, CADisplayLink, NSOperation, NSString;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {

	UITextRange* _range;
	id _placeholder;
	BOOL _didHaveText;
	BOOL _willInsertResult;
	double _angle;
	double _diameter;
	CADisplayLink* _displayLink;
	double _startTime;
	double _shrinkStartTime;
	BOOL _shrinking;
	NSOperation* _afterShrinkCompletionInvocation;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (assign,nonatomic) BOOL willInsertResult;                                 //@synthesize willInsertResult=_willInsertResult - In the implementation block
@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;              //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeInstance;
+(long long)fallbackPlaceholderLength;
+(id)sharedInstance;
+(double)diameterForLineHeight:(double)arg1 ;
+(double)widthForLineHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(id<UITextCursorAssertion>)blinkAssertion;
-(void)stopLanding;
-(void)updatePosition;
-(void)startLandingIfNecessary;
-(void)stopLandingForError;
-(double)fadeOutDuration;
-(void)setWillInsertResult:(BOOL)arg1 ;
-(void)hideCursor;
-(void)clearRotation;
-(void)advanceLanding:(id)arg1 ;
-(void)errorShakeDidFinish;
-(void)startDisplayLinkIfNecessary;
-(void)shrinkWithCompletion:(id)arg1 ;
-(BOOL)delegateWasEmpty;
-(BOOL)hasActivePlaceholder;
-(BOOL)willInsertResult;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(void)rotateBy:(double)arg1 ;
-(void)showCursor;
-(void)dealloc;
@end

