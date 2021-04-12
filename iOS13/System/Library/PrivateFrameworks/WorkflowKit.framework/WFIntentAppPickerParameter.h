/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter {

	NSString* _intentName;

}

@property (nonatomic,readonly) NSString * intentName;              //@synthesize intentName=_intentName - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(BOOL)alwaysShowsButton;
-(NSString *)intentName;
@end

