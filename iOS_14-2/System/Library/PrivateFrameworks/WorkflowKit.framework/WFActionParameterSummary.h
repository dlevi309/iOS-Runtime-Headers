/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFPropertyListObject;
@class NSArray, NSString, WFAction;

@interface WFActionParameterSummary : NSObject {

	NSArray* _possibleValues;
	NSString* _singleFormatString;
	WFAction* _action;
	id<WFPropertyListObject> _definition;

}

@property (assign,nonatomic,__weak) WFAction * action;                                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) id<WFPropertyListObject> definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSArray * possibleValues;                         //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy,readonly) NSString * singleFormatString;                    //@synthesize singleFormatString=_singleFormatString - In the implementation block
-(NSArray *)possibleValues;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id<WFPropertyListObject>)definition;
-(id)localizedFormatString;
-(id)initWithAction:(id)arg1 definition:(id)arg2 ;
-(id)explodedPossibleValuesForLocalization;
-(id)explodedSummaryStringWithKey:(id)arg1 value:(id)arg2 ;
-(id)explodedPossibleValuesForLocalizationWithParameterReplacements;
-(id)possibleValuesFromDictionary:(id)arg1 ;
-(id)parameterReplacedString:(id)arg1 withOverrides:(id)arg2 ;
-(id)placeholderForKey:(id)arg1 ;
-(NSString *)singleFormatString;
@end

