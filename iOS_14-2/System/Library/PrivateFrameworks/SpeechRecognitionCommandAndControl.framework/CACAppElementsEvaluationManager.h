/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

