/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)userSelectedCurrentCandidate;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(void)setFollowsIncompleteRomaji:(BOOL)arg1 ;
-(BOOL)followsZhuyin;
-(BOOL)hasCandidateSelected;
-(BOOL)hasCandidates;
-(BOOL)hardwareKeyboardMode;
-(void)setHasInput:(BOOL)arg1 ;
-(BOOL)hasNextPage;
-(void)setSpaceConfirmation:(BOOL)arg1 ;
-(void)setHasCandidateSelected:(BOOL)arg1 ;
-(void)setFollowsZhuyin:(BOOL)arg1 ;
-(void)setHasNextPage:(BOOL)arg1 ;
-(void)setHasCandidates:(BOOL)arg1 ;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(void)setShowsExtendedList:(BOOL)arg1 ;
-(BOOL)spaceConfirmation;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(BOOL)showsExtendedList;
-(BOOL)hasAutocorrection;
-(void)setShowsCandidatesInLayout:(BOOL)arg1 ;
-(BOOL)hasInput;
-(BOOL)showsCandidatesInLayout;
-(BOOL)followsIncompleteRomaji;
@end

