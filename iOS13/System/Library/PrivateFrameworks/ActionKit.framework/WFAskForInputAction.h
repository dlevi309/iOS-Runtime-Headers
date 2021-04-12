/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSString * promptText; 
@property (nonatomic,readonly) NSString * defaultAnswer; 
@property (nonatomic,readonly) long long datePickerMode; 
@property (nonatomic,readonly) BOOL immediatelyActivateWatchDictation; 
-(long long)datePickerMode;
-(NSString *)promptText;
-(NSString *)inputType;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)outputContentClasses;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(NSString *)defaultAnswer;
-(BOOL)immediatelyActivateWatchDictation;
-(void)finishRunningWithResultText:(id)arg1 ;
-(void)finishRunningWithDate:(id)arg1 ;
@end

