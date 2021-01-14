/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol GKNicknameControllerDelegate;
@class UITextField, UIActivityIndicatorView, GKReachability, NSArray, NSString;

@interface GKNicknameController : NSObject <UITextFieldDelegate> {

	BOOL _nicknameWasEdited;
	BOOL _nicknameChangeWasCommitted;
	BOOL _shouldShakeTextFieldOnError;
	BOOL _shouldUseSuggestedNicknameOnDefaultNickname;
	UITextField* _nickname;
	UIActivityIndicatorView* _activityIndicator;
	id<GKNicknameControllerDelegate> _delegate;
	GKReachability* _reachability;
	NSArray* _suggestedNicknames;

}

@property (assign,nonatomic) BOOL nicknameWasEdited;                                        //@synthesize nicknameWasEdited=_nicknameWasEdited - In the implementation block
@property (assign,nonatomic) BOOL nicknameChangeWasCommitted;                               //@synthesize nicknameChangeWasCommitted=_nicknameChangeWasCommitted - In the implementation block
@property (nonatomic,retain) GKReachability * reachability;                                 //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSArray * suggestedNicknames;                                  //@synthesize suggestedNicknames=_suggestedNicknames - In the implementation block
@property (nonatomic,retain) UITextField * nickname;                                        //@synthesize nickname=_nickname - In the implementation block
@property (assign,nonatomic) BOOL shouldShakeTextFieldOnError;                              //@synthesize shouldShakeTextFieldOnError=_shouldShakeTextFieldOnError - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSuggestedNicknameOnDefaultNickname;              //@synthesize shouldUseSuggestedNicknameOnDefaultNickname=_shouldUseSuggestedNicknameOnDefaultNickname - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (__weak) id<GKNicknameControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicator;
-(void)stopObservingKeyboardEvents;
-(void)startObservingKeyboardEvents;
-(void)didSelectSuggestion:(id)arg1 ;
-(BOOL)nicknameChangeWasCommitted;
-(void)setShouldShakeTextFieldOnError:(BOOL)arg1 ;
-(BOOL)shouldUseSuggestedNicknameOnDefaultNickname;
-(id)init;
-(id<GKNicknameControllerDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UITextField *)nickname;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(GKReachability *)reachability;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(void)setDelegate:(id<GKNicknameControllerDelegate>)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)setNickname:(UITextField *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)reset;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setReachability:(GKReachability *)arg1 ;
-(void)setShouldUseSuggestedNicknameOnDefaultNickname:(BOOL)arg1 ;
-(void)displayNicknameSuggestions;
-(void)nicknameTextChanged:(id)arg1 ;
-(void)setSuggestedNicknames:(NSArray *)arg1 ;
-(BOOL)shouldShakeTextFieldOnError;
-(void)shakeNicknameTextFieldWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setNicknameChangeWasCommitted:(BOOL)arg1 ;
-(void)setNicknameWasEdited:(BOOL)arg1 ;
-(void)commitNicknameChanges:(/*^block*/id)arg1 ;
-(NSArray *)suggestedNicknames;
-(void)updateReturnKeyEnabledState;
-(void)loadSuggestedNicknames:(/*^block*/id)arg1 ;
-(BOOL)nicknameWasEdited;
@end

