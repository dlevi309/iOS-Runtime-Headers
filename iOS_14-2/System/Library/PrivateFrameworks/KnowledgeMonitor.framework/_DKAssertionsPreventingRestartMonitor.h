/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)loadState;
-(void)saveState;
-(void)synchronouslyReflectCurrentValue;
-(int)userspaceAssertionsToken;
-(void)setPreventIdleSleepAssertionsToken:(int)arg1 ;
-(void)start;
-(BOOL)lastPreventingRestartAssertionsStatus;
-(void)setUserspaceAssertionsToken:(int)arg1 ;
-(void)stop;
-(void)deactivate;
-(void)setSystemAssertionsToken:(int)arg1 ;
-(int)restartPreventerAssertionsToken;
-(int)systemAssertionsToken;
-(BOOL)areAssertionsPreventingRestart;
-(void)setLastPreventingRestartAssertionsStatus:(BOOL)arg1 ;
-(void)dealloc;
-(void)setRestartPreventerAssertionsToken:(int)arg1 ;
-(int)preventIdleSleepAssertionsToken;
@end

