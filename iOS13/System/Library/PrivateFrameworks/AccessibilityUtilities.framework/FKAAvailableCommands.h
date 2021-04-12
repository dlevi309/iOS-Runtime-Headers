/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString, NSMutableDictionary, NSSet, NSArray, AXSSKeyboardCommandMap;

@interface FKAAvailableCommands : NSObject {

	NSString* _siriShortcutsDidChangeObserverToken;
	id _forceTouchEnabledDidChangeObserverToken;
	NSMutableDictionary* _tokensToUpdateBlocks;

}

@property (nonatomic,retain) NSString * siriShortcutsDidChangeObserverToken;              //@synthesize siriShortcutsDidChangeObserverToken=_siriShortcutsDidChangeObserverToken - In the implementation block
@property (nonatomic,retain) id forceTouchEnabledDidChangeObserverToken;                  //@synthesize forceTouchEnabledDidChangeObserverToken=_forceTouchEnabledDidChangeObserverToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tokensToUpdateBlocks;                  //@synthesize tokensToUpdateBlocks=_tokensToUpdateBlocks - In the implementation block
@property (nonatomic,readonly) NSSet * commands; 
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,retain) AXSSKeyboardCommandMap * commandMap; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSArray *)categories;
-(NSSet *)commands;
-(NSMutableDictionary *)tokensToUpdateBlocks;
-(id)_siriShortcutCommands;
-(void)setTokensToUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(AXSSKeyboardCommandMap *)commandMap;
-(void)setCommandMap:(AXSSKeyboardCommandMap *)arg1 ;
-(id)registerUpdateBlock:(/*^block*/id)arg1 ;
-(void)unregisterUpdateBlockWithToken:(id)arg1 ;
-(NSString *)siriShortcutsDidChangeObserverToken;
-(void)setSiriShortcutsDidChangeObserverToken:(NSString *)arg1 ;
-(id)forceTouchEnabledDidChangeObserverToken;
-(void)setForceTouchEnabledDidChangeObserverToken:(id)arg1 ;
@end

