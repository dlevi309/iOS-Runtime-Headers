/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@interface TIKeyboardBehaviorState : NSObject {

	BOOL hasInput;
	BOOL hasCandidates;
	BOOL hasCandidateSelected;
	BOOL hasNextPage;
	BOOL showsExtendedList;
	BOOL followsZhuyin;
	BOOL spaceConfirmation;
	BOOL hardwareKeyboardMode;
	BOOL followsIncompleteRomaji;
	BOOL _hasAutocorrection;
	BOOL _userSelectedCurrentCandidate;
	BOOL _showsCandidatesInLayout;

}

@property (assign,nonatomic) BOOL hasInput; 
@property (assign,nonatomic) BOOL hasAutocorrection;                         //@synthesize hasAutocorrection=_hasAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates; 
@property (assign,nonatomic) BOOL hasCandidateSelected; 
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate;              //@synthesize userSelectedCurrentCandidate=_userSelectedCurrentCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasNextPage; 
@property (assign,nonatomic) BOOL showsExtendedList; 
@property (assign,nonatomic) BOOL followsZhuyin; 
@property (assign,nonatomic) BOOL spaceConfirmation; 
@property (assign,nonatomic) BOOL showsCandidatesInLayout;                   //@synthesize showsCandidatesInLayout=_showsCandidatesInLayout - In the implementation block
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
@property (assign,nonatomic) BOOL followsIncompleteRomaji; 
-(BOOL)hasCandidates;
-(BOOL)hasAutocorrection;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(BOOL)hardwareKeyboardMode;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(BOOL)userSelectedCurrentCandidate;
-(void)setHasInput:(BOOL)arg1 ;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(void)setHasCandidates:(BOOL)arg1 ;
-(void)setHasCandidateSelected:(BOOL)arg1 ;
-(void)setHasNextPage:(BOOL)arg1 ;
-(void)setShowsExtendedList:(BOOL)arg1 ;
-(void)setShowsCandidatesInLayout:(BOOL)arg1 ;
-(void)setFollowsZhuyin:(BOOL)arg1 ;
-(BOOL)followsIncompleteRomaji;
-(void)setFollowsIncompleteRomaji:(BOOL)arg1 ;
-(void)setSpaceConfirmation:(BOOL)arg1 ;
-(BOOL)hasInput;
-(BOOL)hasCandidateSelected;
-(BOOL)hasNextPage;
-(BOOL)showsExtendedList;
-(BOOL)followsZhuyin;
-(BOOL)spaceConfirmation;
-(BOOL)showsCandidatesInLayout;
@end

