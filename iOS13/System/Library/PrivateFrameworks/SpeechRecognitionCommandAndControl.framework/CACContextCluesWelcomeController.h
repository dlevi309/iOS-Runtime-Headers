/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

