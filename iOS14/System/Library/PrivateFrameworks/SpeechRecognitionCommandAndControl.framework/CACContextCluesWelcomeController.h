/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol CACContextCluesWelcomeControllerDelegate;
@interface CACContextCluesWelcomeController : OBTextWelcomeController {

	id<CACContextCluesWelcomeControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CACContextCluesWelcomeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CACContextCluesWelcomeControllerDelegate>)delegate;
-(void)setDelegate:(id<CACContextCluesWelcomeControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
@end

