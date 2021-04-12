/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@protocol SiriAssertion;
@class SiriLongPressButtonSource, NSString;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction> {

	double _initialPressDownTime;
	long long _siriButtonIdentifier;
	SiriLongPressButtonSource* _siriActivationSource;
	double _activationInterval;
	id<SiriAssertion> _siriPreheatAssertion;
	id<SiriAssertion> _siriButtonDownAssertion;

}

@property (assign,nonatomic) long long siriButtonIdentifier;                                //@synthesize siriButtonIdentifier=_siriButtonIdentifier - In the implementation block
@property (nonatomic,retain) SiriLongPressButtonSource * siriActivationSource;              //@synthesize siriActivationSource=_siriActivationSource - In the implementation block
@property (assign,nonatomic) double activationInterval;                                     //@synthesize activationInterval=_activationInterval - In the implementation block
@property (nonatomic,retain) id<SiriAssertion> siriPreheatAssertion;                        //@synthesize siriPreheatAssertion=_siriPreheatAssertion - In the implementation block
@property (nonatomic,retain) id<SiriAssertion> siriButtonDownAssertion;                     //@synthesize siriButtonDownAssertion=_siriButtonDownAssertion - In the implementation block
@property (assign,nonatomic) double initialPressDownTime;                                   //@synthesize initialPressDownTime=_initialPressDownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hardwareButtonInteractionForLockButton;
+(id)hardwareButtonInteractionForHomeButton;
+(BOOL)dismissSiriTransientOverlayOnSinglePressUp:(long long)arg1 ;
-(long long)siriButtonIdentifier;
-(id)hardwareButtonGestureParameters;
-(void)observeFinalPressUp;
-(void)setInitialPressDownTime:(double)arg1 ;
-(BOOL)consumeInitialPressDown;
-(BOOL)consumeLongPress;
-(BOOL)consumeSinglePressUp;
-(void)observeLongPressCanceled;
-(id)initWithSiriButton:(long long)arg1 ;
-(void)_cancelPreheating;
-(void)_cancelAllSiriActions;
-(void)_preheatSiriForPresentationAfterInterval:(double)arg1 ;
-(void)_siriHomeButtonPrefsDidChange:(id)arg1 ;
-(double)initialPressDownTime;
-(void)setSiriButtonIdentifier:(long long)arg1 ;
-(SiriLongPressButtonSource *)siriActivationSource;
-(void)setSiriActivationSource:(SiriLongPressButtonSource *)arg1 ;
-(double)activationInterval;
-(void)setActivationInterval:(double)arg1 ;
-(id<SiriAssertion>)siriPreheatAssertion;
-(void)setSiriPreheatAssertion:(id<SiriAssertion>)arg1 ;
-(id<SiriAssertion>)siriButtonDownAssertion;
-(void)setSiriButtonDownAssertion:(id<SiriAssertion>)arg1 ;
@end

