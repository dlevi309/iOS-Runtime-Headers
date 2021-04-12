/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter {

	BOOL _supportsLanguageDetection;
	NSArray* _possibleStates;

}

@property (nonatomic,readonly) NSArray * possibleStates;                    //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) BOOL supportsLanguageDetection;              //@synthesize supportsLanguageDetection=_supportsLanguageDetection - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(BOOL)supportsLanguageDetection;
@end

