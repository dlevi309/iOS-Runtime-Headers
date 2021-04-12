/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(BOOL)supportsLanguageDetection;
@end

