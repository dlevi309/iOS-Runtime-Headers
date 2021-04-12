/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFEvernoteAccessResource* _evernoteAccessResource;

}

@property (nonatomic,readonly) NSArray * possibleStates;                                     //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) WFEvernoteAccessResource * evernoteAccessResource;              //@synthesize evernoteAccessResource=_evernoteAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)setActionResources:(id)arg1 ;
-(void)setEvernoteAccessResource:(WFEvernoteAccessResource *)arg1 ;
-(WFEvernoteAccessResource *)evernoteAccessResource;
-(void)updateNotebooks;
@end

