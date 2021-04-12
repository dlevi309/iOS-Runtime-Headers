/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@interface WFAppPickerParameter : WFParameter {

	long long _appSearchType;

}

@property (nonatomic,readonly) long long appSearchType;              //@synthesize appSearchType=_appSearchType - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)localizedPlaceholder;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForState:(id)arg1 ;
-(id)accessoryIconForState:(id)arg1 ;
-(id)stateForApp:(id)arg1 ;
-(long long)appSearchType;
@end

