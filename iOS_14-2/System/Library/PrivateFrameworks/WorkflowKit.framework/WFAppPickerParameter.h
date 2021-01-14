/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSString;

@interface WFAppPickerParameter : WFParameter <WFModuleSummarySupporting> {

	long long _appSearchType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long appSearchType;              //@synthesize appSearchType=_appSearchType - In the implementation block
-(id)moduleSummarySlotForState:(id)arg1 ;
-(id)localizedPlaceholder;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForState:(id)arg1 ;
-(id)accessoryIconForState:(id)arg1 ;
-(id)stateForApp:(id)arg1 ;
-(long long)appSearchType;
@end

