/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSNumber, NSString;

@interface WFStepperParameter : WFParameter <WFModuleSummarySupporting> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSString* _singularNoun;
	NSString* _pluralNoun;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * singularNoun;                            //@synthesize singularNoun=_singularNoun - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluralNoun;                              //@synthesize pluralNoun=_pluralNoun - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabelFormatString; 
-(id)moduleSummarySlotForState:(id)arg1 ;
-(NSNumber *)maximumValue;
-(id)localizedLabel;
-(NSNumber *)minimumValue;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(NSString *)localizedLabelFormatString;
-(id)localizedLabelWithState:(id)arg1 includingPrefix:(BOOL)arg2 ;
-(NSString *)singularNoun;
-(NSString *)pluralNoun;
@end

