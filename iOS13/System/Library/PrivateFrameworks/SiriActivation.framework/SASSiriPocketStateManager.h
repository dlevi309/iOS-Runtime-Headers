/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/CMPocketStateDelegate.h>

@class CMPocketStateManager, NSString;

@interface SASSiriPocketStateManager : NSObject <CMPocketStateDelegate> {

	CMPocketStateManager* _pocketStateManager;
	long long _currentPocketState;

}

@property (setter=_setPocketStateManager:,getter=_pocketStateManager,nonatomic,retain) CMPocketStateManager * pocketStateManager;              //@synthesize pocketStateManager=_pocketStateManager - In the implementation block
@property (assign,setter=_setCurrentPocketState:,getter=_currentPocketState,nonatomic) long long currentPocketState;                           //@synthesize currentPocketState=_currentPocketState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedManager;
-(id)init;
-(id)_init;
-(void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(BOOL)pocketStateShouldPreventVoiceTrigger;
-(void)_setPocketStateManager:(id)arg1 ;
-(id)_pocketStateManager;
-(void)_setCurrentPocketState:(long long)arg1 ;
-(void)_updateForPocketState:(long long)arg1 ;
-(id)_stringForPocketState:(long long)arg1 ;
-(long long)_currentPocketState;
-(void)queryForPocketStateWithCompletion:(/*^block*/id)arg1 ;
@end

