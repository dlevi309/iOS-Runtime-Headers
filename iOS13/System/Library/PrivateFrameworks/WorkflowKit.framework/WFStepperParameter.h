/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSNumber, NSString;

@interface WFStepperParameter : WFParameter {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSString* _singularNoun;
	NSString* _pluralNoun;

}

@property (nonatomic,copy,readonly) NSString * singularNoun;                            //@synthesize singularNoun=_singularNoun - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluralNoun;                              //@synthesize pluralNoun=_pluralNoun - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabelFormatString; 
-(id)initWithDefinition:(id)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)localizedLabel;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(NSString *)localizedLabelFormatString;
-(id)localizedLabelWithState:(id)arg1 includingPrefix:(BOOL)arg2 ;
-(NSString *)singularNoun;
-(NSString *)pluralNoun;
@end

