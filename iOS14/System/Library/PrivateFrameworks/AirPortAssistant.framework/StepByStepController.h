/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackController.h>
#import <libobjc.A.dylib/AutoGuessSetup.h>
#import <libobjc.A.dylib/StepByStepUIDelegateResult.h>

@class NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {

	StepByStepContextRef _stepByStepContext;
	id _delegate;
	NSDictionary* _restoreRecommendation;

}

@property (assign) id<StepByStepUIDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDictionary * restoreRecommendation;              //@synthesize restoreRecommendation=_restoreRecommendation - In the implementation block
+(id)stepByStepController;
-(id)init;
-(id<StepByStepUIDelegate>)delegate;
-(void)setDelegate:(id<StepByStepUIDelegate>)arg1 ;
-(int)resume;
-(void)dealloc;
-(int)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2 ;
-(void)setRestoreRecommendation:(NSDictionary *)arg1 ;
-(int)cancelStepByStep;
-(void)stepByStepNextStepResult:(int)arg1 withOptions:(id)arg2 ;
-(NSDictionary *)restoreRecommendation;
@end

