/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject {

	BOOL _isPhraseSpotterBypassed;
	BOOL _isRaiseToSpeakBypassed;
	NSMutableSet* _activationAssertions;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableSet * activationAssertions;              //@synthesize activationAssertions=_activationAssertions - In the implementation block
@property (assign,nonatomic) BOOL isPhraseSpotterBypassed;                     //@synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed - In the implementation block
@property (assign,nonatomic) BOOL isRaiseToSpeakBypassed;                      //@synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(id)fetchVoiceTriggerStats;
-(BOOL)isPhraseSpotterBypassed;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(void)setIsRaiseToSpeakBypassed:(BOOL)arg1 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyServiceConnectionLost;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setIsPhraseSpotterBypassed:(BOOL)arg1 ;
-(NSMutableSet *)activationAssertions;
-(BOOL)isRaiseToSpeakBypassed;
-(void)setActivationAssertions:(NSMutableSet *)arg1 ;
@end

