/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKitCore/UIViewController.h>

@interface ConversationKit.ParticipantGridViewController : UIViewController {

	 participants;
	 participantsBeforeFocus;
	 participantPriorities;
	 forceAudioPriorityButton;
	??? focusedParticipant;
	??? sashedParticipant;
	??? selectedParticipant;
	 participantsViewControllerDelegate;
	 participantGridViewControllerDelegate;

}
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)forceBumpPriority;
@end

