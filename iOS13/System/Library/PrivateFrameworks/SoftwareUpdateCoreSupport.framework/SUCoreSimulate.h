/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_dispatch_queue;
@class SUCoreSimulateEvent, NSObject, NSDictionary;

@interface SUCoreSimulate : NSObject {

	BOOL _simulatorEnabled;
	int _alterationsPerformed;
	SUCoreSimulateEvent* _lastAlteration;
	NSObject*<OS_dispatch_queue> _simulateQueue;
	NSDictionary* _eventAlterations;
	/*^block*/id _registeredCallback;

}

@property (assign,nonatomic) int alterationsPerformed;                                  //@synthesize alterationsPerformed=_alterationsPerformed - In the implementation block
@property (nonatomic,retain) SUCoreSimulateEvent * lastAlteration;                      //@synthesize lastAlteration=_lastAlteration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> simulateQueue;              //@synthesize simulateQueue=_simulateQueue - In the implementation block
@property (nonatomic,readonly) BOOL simulatorEnabled;                                   //@synthesize simulatorEnabled=_simulatorEnabled - In the implementation block
@property (nonatomic,retain) NSDictionary * eventAlterations;                           //@synthesize eventAlterations=_eventAlterations - In the implementation block
@property (nonatomic,copy) id registeredCallback;                                       //@synthesize registeredCallback=_registeredCallback - In the implementation block
+(id)sharedSimulator;
-(id)init;
-(BOOL)simulatorEnabled;
-(NSObject*<OS_dispatch_queue>)simulateQueue;
-(void)_adoptAllEventAlterations:(id)arg1 ;
-(NSDictionary *)eventAlterations;
-(id)_eventFromLine:(id)arg1 ;
-(void)setEventAlterations:(NSDictionary *)arg1 ;
-(long long)_actionFromString:(id)arg1 ;
-(long long)_triggerFromString:(id)arg1 ;
-(BOOL)_parseOptionalEntriesInLineFromWords:(id)arg1 argStartAt:(int*)arg2 argEndAt:(int*)arg3 ;
-(BOOL)_parseIntFromString:(id)arg1 destination:(int*)arg2 ;
-(void)setAlterationsPerformed:(int)arg1 ;
-(void)setLastAlteration:(SUCoreSimulateEvent *)arg1 ;
-(void)_dumpAllEventAlterations;
-(int)alterationsPerformed;
-(SUCoreSimulateEvent *)lastAlteration;
-(id)_locateEventForModule:(id)arg1 forIdentity:(id)arg2 withTrigger:(long long)arg3 forEvent:(id)arg4 inState:(id)arg5 ;
-(void)setRegisteredCallback:(id)arg1 ;
-(id)_performSimulatedEventAlteration:(id)arg1 ;
-(void)_performingAlteration:(id)arg1 ;
-(id)registeredCallback;
-(void)adoptAllEventAlterations:(id)arg1 ;
-(void)clearAllEventAlterations;
-(void)dumpAllEventAlterations;
-(int)countOfAlterationsPerformed;
-(id)lastAlterationPerformed;
-(id)begin:(id)arg1 atFunction:(id)arg2 ;
-(id)end:(id)arg1 atFunction:(id)arg2 ;
-(void)registerCallbackHandler:(/*^block*/id)arg1 ;
-(id)fsm:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ;
@end

