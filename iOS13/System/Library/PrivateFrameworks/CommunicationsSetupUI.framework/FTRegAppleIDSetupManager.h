/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@class NSMutableDictionary, NSArray, NSString, IDSAccountController;

@interface FTRegAppleIDSetupManager : NSObject {

	NSMutableDictionary* _setupOperations;
	/*^block*/id _handler;
	NSArray* _candidateAliases;
	NSArray* _selectedAliases;
	NSString* _selectionSummaryText;
	IDSAccountController* _iMessageAccountController;
	IDSAccountController* _faceTimeAccountController;

}

@property (nonatomic,retain) IDSAccountController * iMessageAccountController;              //@synthesize iMessageAccountController=_iMessageAccountController - In the implementation block
@property (nonatomic,retain) IDSAccountController * faceTimeAccountController;              //@synthesize faceTimeAccountController=_faceTimeAccountController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * setupOperations;                         //@synthesize setupOperations=_setupOperations - In the implementation block
@property (nonatomic,copy) id handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSArray * candidateAliases;                                      //@synthesize candidateAliases=_candidateAliases - In the implementation block
@property (nonatomic,copy) NSString * selectionSummaryText;                                 //@synthesize selectionSummaryText=_selectionSummaryText - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowAliasSelectionUI; 
@property (nonatomic,copy) NSArray * selectedAliases;                                       //@synthesize selectedAliases=_selectedAliases - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_cleanup;
-(id)_appleID;
-(IDSAccountController *)iMessageAccountController;
-(IDSAccountController *)faceTimeAccountController;
-(void)setSetupOperations:(NSMutableDictionary *)arg1 ;
-(void)setCandidateAliases:(NSArray *)arg1 ;
-(void)setSelectedAliases:(NSArray *)arg1 ;
-(void)_notifySuccess:(BOOL)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)setupOperations;
-(id)accountControllerForService:(id)arg1 ;
-(void)_updateCandidateAliases;
-(BOOL)_shouldAttemptAccountRegistration;
-(NSArray *)candidateAliases;
-(BOOL)showsPhoneNumberDisplayString;
-(BOOL)_shouldShowAliasSelectionUI;
-(id)phoneNumberDisplayString;
-(NSArray *)selectedAliases;
-(void)setSelectionSummaryText:(NSString *)arg1 ;
-(void)_updateSelectionSummaryText;
-(void)_notifySuccess;
-(void)_notifyFailureWithError:(id)arg1 ;
-(id)_aliasesForDictionary:(id)arg1 ;
-(void)addSetupDictionary:(id)arg1 forService:(long long)arg2 ;
-(BOOL)shouldShowAliasSelectionUI;
-(BOOL)aliasIsEnabled:(id)arg1 ;
-(BOOL)beginSetupWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)selectionSummaryText;
-(void)setIMessageAccountController:(IDSAccountController *)arg1 ;
-(void)setFaceTimeAccountController:(IDSAccountController *)arg1 ;
@end

