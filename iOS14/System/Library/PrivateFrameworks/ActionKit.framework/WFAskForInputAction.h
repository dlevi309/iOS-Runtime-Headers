/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction {

	long long _datePickerMode;

}

@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSString * promptText; 
@property (nonatomic,readonly) NSString * defaultAnswer; 
@property (nonatomic,readonly) long long datePickerMode;                            //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,readonly) BOOL immediatelyActivateWatchDictation; 
-(NSString *)promptText;
-(NSString *)inputType;
-(long long)datePickerMode;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)outputContentClasses;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(BOOL)shouldCreateIntentAvailableResource;
-(NSString *)defaultAnswer;
-(BOOL)immediatelyActivateWatchDictation;
-(id)datePickerModeFromInputType:(id)arg1 ;
-(void)finishRunningWithResultText:(id)arg1 ;
-(void)finishRunningWithDate:(id)arg1 ;
@end

