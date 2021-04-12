/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBProcessManagerKeyboardFocusDelegate.h>

@protocol BSInvalidatable;
@class SBMainWorkspace, NSHashTable, NSMutableArray, BKSHIDEventDeferringToken, NSString;

@interface SBWorkspaceKeyboardFocusController : NSObject <FBProcessManagerKeyboardFocusDelegate> {

	int _keyboardFocusPID;
	SBMainWorkspace* _workspace;
	NSHashTable* _observers;
	NSMutableArray* _redirections;
	NSMutableArray* _holdAssertions;
	id<BSInvalidatable> _keyboardFocusRule;
	id<BSInvalidatable> _compatibilityKeyboardFocusRule;
	BKSHIDEventDeferringToken* _keyboardFocusToken;

}

@property (nonatomic,retain) SBMainWorkspace * workspace;                                     //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * redirections;                                   //@synthesize redirections=_redirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * holdAssertions;                                 //@synthesize holdAssertions=_holdAssertions - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> keyboardFocusRule;                           //@synthesize keyboardFocusRule=_keyboardFocusRule - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> compatibilityKeyboardFocusRule;              //@synthesize compatibilityKeyboardFocusRule=_compatibilityKeyboardFocusRule - In the implementation block
@property (nonatomic,retain) BKSHIDEventDeferringToken * keyboardFocusToken;                  //@synthesize keyboardFocusToken=_keyboardFocusToken - In the implementation block
@property (assign,nonatomic) int keyboardFocusPID;                                            //@synthesize keyboardFocusPID=_keyboardFocusPID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(SBMainWorkspace *)workspace;
-(void)setWorkspace:(SBMainWorkspace *)arg1 ;
-(void)processManager:(id)arg1 didSelectKeyboardFocusProcess:(id)arg2 deferringToken:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 ;
-(id)lockFocusToSpringBoardForReason:(id)arg1 ;
-(void)updateKeyboardFocusDeferringRules;
-(BOOL)_getSceneKeyboardFocusOverridePID:(int*)arg1 token:(id*)arg2 ;
-(void)_notifyObserversDidUpdateKeyboardFocusPID:(int)arg1 token:(id)arg2 ;
-(id)redirectFocusForReason:(id)arg1 fromProcessIdentifier:(int)arg2 fromDeferringToken:(id)arg3 toProcessidentifier:(int)arg4 toDeferringToken:(id)arg5 ;
-(NSMutableArray *)redirections;
-(void)setRedirections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)holdAssertions;
-(void)setHoldAssertions:(NSMutableArray *)arg1 ;
-(id<BSInvalidatable>)keyboardFocusRule;
-(void)setKeyboardFocusRule:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)compatibilityKeyboardFocusRule;
-(void)setCompatibilityKeyboardFocusRule:(id<BSInvalidatable>)arg1 ;
-(BKSHIDEventDeferringToken *)keyboardFocusToken;
-(void)setKeyboardFocusToken:(BKSHIDEventDeferringToken *)arg1 ;
-(int)keyboardFocusPID;
-(void)setKeyboardFocusPID:(int)arg1 ;
@end

