/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKComposeChatController.h>

@interface CKShareSheetChatController : CKComposeChatController {

	unsigned long long _interactionSignPost;
	BOOL _alreadySetUp;

}

@property (assign,nonatomic) BOOL alreadySetUp;              //@synthesize alreadySetUp=_alreadySetUp - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(void)_beginInteractionSignPost;
-(void)_endInteractionSignPost;
-(void)sendComposition:(id)arg1 ;
-(void)insertInitialCompositionIfNeeded;
-(BOOL)shouldDismissAfterSend;
-(BOOL)alreadySetUp;
-(void)setAlreadySetUp:(BOOL)arg1 ;
@end

