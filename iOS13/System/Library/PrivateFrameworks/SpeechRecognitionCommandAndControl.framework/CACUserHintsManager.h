/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

