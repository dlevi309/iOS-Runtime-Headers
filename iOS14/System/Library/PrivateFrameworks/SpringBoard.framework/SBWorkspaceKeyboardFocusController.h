/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBProcessManagerKeyboardFocusDelegate.h>

@protocol BSInvalidatable;
@class SBMainWorkspace, NSHashTable, NSMutableArray, BSCompoundAssertion, BKSHIDEventDeferringToken, NSString;

@interface SBWorkspaceKeyboardFocusController : NSObject <FBProcessManagerKeyboardFocusDelegate> {

	int _keyboardFocusPID;
	SBMainWorkspace* _workspace;
	NSHashTable* _observers;
	NSMutableArray* _redirections;
	NSMutableArray* _holdAssertions;
	BSCompoundAssertion* _preventProcessFocusAssertion;
	id<BSInvalidatable> _keyboardFocusRule;
	id<BSInvalidatable> _compatibilityKeyboardFocusRule;
	BKSHIDEventDeferringToken* _keyboardFocusToken;

}

@property (nonatomic,retain) SBMainWorkspace * workspace;                                     //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * redirections;                                   //@synthesize redirections=_redirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * holdAssertions;                                 //@synthesize holdAssertions=_holdAssertions - In the implementation block
@property (nonatomic,retain) BSCompoundAssertion * preventProcessFocusAssertion;              //@synthesize preventProcessFocusAssertion=_preventProcessFocusAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> keyboardFocusRule;                           //@synthesize keyboardFocusRule=_keyboardFocusRule - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> compatibilityKeyboardFocusRule;              //@synthesize compatibilityKeyboardFocusRule=_compatibilityKeyboardFocusRule - In the implementation block
@property (nonatomic,retain) BKSHIDEventDeferringToken * keyboardFocusToken;                  //@synthesize keyboardFocusToken=_keyboardFocusToken - In the implementation block
@property (assign,nonatomic) int keyboardFocusPID;                                            //@synthesize keyboardFocusPID=_keyboardFocusPID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObserversDidUpdateKeyboardFocusPID:(int)arg1 token:(id)arg2 ;
-(void)setCompatibilityKeyboardFocusRule:(id<BSInvalidatable>)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)updateKeyboardFocusDeferringRules;
-(void)setKeyboardFocusPID:(int)arg1 ;
-(void)setPreventProcessFocusAssertion:(BSCompoundAssertion *)arg1 ;
-(NSMutableArray *)redirections;
-(void)setWorkspace:(SBMainWorkspace *)arg1 ;
-(SBMainWorkspace *)workspace;
-(void)setKeyboardFocusToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setRedirections:(NSMutableArray *)arg1 ;
-(BKSHIDEventDeferringToken *)keyboardFocusToken;
-(id)initWithWorkspace:(id)arg1 ;
-(id)redirectFocusForReason:(id)arg1 fromProcessIdentifier:(int)arg2 fromDeferringToken:(id)arg3 toProcessidentifier:(int)arg4 toDeferringToken:(id)arg5 ;
-(id<BSInvalidatable>)compatibilityKeyboardFocusRule;
-(id)lockFocusToSpringBoardForReason:(id)arg1 ;
-(BSCompoundAssertion *)preventProcessFocusAssertion;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSMutableArray *)holdAssertions;
-(void)removeObserver:(id)arg1 ;
-(void)setHoldAssertions:(NSMutableArray *)arg1 ;
-(void)setKeyboardFocusRule:(id<BSInvalidatable>)arg1 ;
-(id)preventFocusForProcessIdentifier:(int)arg1 reason:(id)arg2 ;
-(id<BSInvalidatable>)keyboardFocusRule;
-(int)keyboardFocusPID;
-(BOOL)_getSceneKeyboardFocusOverridePID:(int*)arg1 token:(id*)arg2 ;
-(void)processManager:(id)arg1 didSelectKeyboardFocusProcess:(id)arg2 deferringToken:(id)arg3 ;
@end

