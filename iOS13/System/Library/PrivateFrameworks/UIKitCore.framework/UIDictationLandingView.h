/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

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

}

@property (assign,nonatomic) BOOL willInsertResult;                 //@synthesize willInsertResult=_willInsertResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(long long)fallbackPlaceholderLength;
+(double)diameterForLineHeight:(double)arg1 ;
+(double)widthForLineHeight:(double)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)drawRect:(CGRect)arg1 ;
-(void)updatePosition;
-(void)startLandingIfNecessary;
-(void)stopLandingForError;
-(void)stopLanding;
-(void)setWillInsertResult:(BOOL)arg1 ;
-(double)fadeOutDuration;
-(void)clearRotation;
-(void)rotateBy:(double)arg1 ;
-(void)advanceLanding:(id)arg1 ;
-(void)startDisplayLinkIfNecessary;
-(void)hideCursor;
-(void)showCursor;
-(void)shrinkWithCompletion:(id)arg1 ;
-(void)errorShakeDidFinish;
-(BOOL)delegateWasEmpty;
-(BOOL)hasActivePlaceholder;
-(BOOL)willInsertResult;
@end

