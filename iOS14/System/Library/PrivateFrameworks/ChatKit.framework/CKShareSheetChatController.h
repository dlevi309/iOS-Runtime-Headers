/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKComposeChatController.h>

@interface CKShareSheetChatController : CKComposeChatController {

	unsigned long long _interactionSignPost;
	BOOL _alreadySetUp;

}

@property (assign,nonatomic) BOOL alreadySetUp;              //@synthesize alreadySetUp=_alreadySetUp - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)alreadySetUp;
-(void)_beginInteractionSignPost;
-(void)sendComposition:(id)arg1 ;
-(void)_endInteractionSignPost;
-(void)insertInitialCompositionIfNeeded;
-(BOOL)shouldDismissAfterSend;
-(void)setAlreadySetUp:(BOOL)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
@end

