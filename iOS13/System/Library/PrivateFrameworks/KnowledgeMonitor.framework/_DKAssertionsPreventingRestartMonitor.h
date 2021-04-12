/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor {

	BOOL _lastPreventingRestartAssertionsStatus;
	int _userspaceAssertionsToken;
	int _preventIdleSleepAssertionsToken;
	int _systemAssertionsToken;
	int _restartPreventerAssertionsToken;

}

@property (assign,nonatomic) int userspaceAssertionsToken;                            //@synthesize userspaceAssertionsToken=_userspaceAssertionsToken - In the implementation block
@property (assign,nonatomic) int preventIdleSleepAssertionsToken;                     //@synthesize preventIdleSleepAssertionsToken=_preventIdleSleepAssertionsToken - In the implementation block
@property (assign,nonatomic) int systemAssertionsToken;                               //@synthesize systemAssertionsToken=_systemAssertionsToken - In the implementation block
@property (assign,nonatomic) int restartPreventerAssertionsToken;                     //@synthesize restartPreventerAssertionsToken=_restartPreventerAssertionsToken - In the implementation block
@property (assign,nonatomic) BOOL lastPreventingRestartAssertionsStatus;              //@synthesize lastPreventingRestartAssertionsStatus=_lastPreventingRestartAssertionsStatus - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(id)loadState;
-(void)saveState;
-(BOOL)areAssertionsPreventingRestart;
-(int)userspaceAssertionsToken;
-(void)setUserspaceAssertionsToken:(int)arg1 ;
-(int)preventIdleSleepAssertionsToken;
-(void)setPreventIdleSleepAssertionsToken:(int)arg1 ;
-(int)systemAssertionsToken;
-(void)setSystemAssertionsToken:(int)arg1 ;
-(int)restartPreventerAssertionsToken;
-(void)setRestartPreventerAssertionsToken:(int)arg1 ;
-(BOOL)lastPreventingRestartAssertionsStatus;
-(void)setLastPreventingRestartAssertionsStatus:(BOOL)arg1 ;
@end

