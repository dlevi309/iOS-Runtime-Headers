/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@interface CACUserHintsManager : NSObject {

	double _lastPruneTime;

}
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(void)clearHistory;
-(BOOL)shouldDisplayUserHintAfterRegisteringIdentifier:(id)arg1 ;
-(id)suggestedCommandIdentifiersFromActiveCommandIdentifiers:(id)arg1 maximumCount:(long long)arg2 ;
-(unsigned long long)_countAfterRegisteringUserHintIdentifier:(id)arg1 ;
@end

