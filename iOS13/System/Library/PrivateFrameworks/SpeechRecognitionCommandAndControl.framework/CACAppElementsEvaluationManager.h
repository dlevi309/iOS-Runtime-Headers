/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSSet, NSString;

@interface CACAppElementsEvaluationManager : NSObject {

	NSSet* _appIdentifersForStandardFilter;
	NSString* _evaluatorOverrideClassName;

}
+(id)sharedManager;
-(id)init;
-(Class)evaluatorClassForAppIdentifier:(id)arg1 ;
-(id)_trimmedArrayOfActionableAXElements:(id)arg1 ;
-(id)actionableAXElementsFromAXElements:(id)arg1 forAppIdentifier:(id)arg2 ;
-(BOOL)isRecognitionString:(id)arg1 supportedForElement:(id)arg2 ;
@end

