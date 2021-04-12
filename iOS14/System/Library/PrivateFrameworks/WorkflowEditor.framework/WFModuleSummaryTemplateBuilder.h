/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSString, NSArray;

@interface WFModuleSummaryTemplateBuilder : NSObject {

	NSString* _formatString;
	NSArray* _formatItems;
	NSArray* _parameterKeys;

}

@property (nonatomic,retain) NSArray * formatItems;                       //@synthesize formatItems=_formatItems - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeys;                       //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatString;              //@synthesize formatString=_formatString - In the implementation block
+(id)slotsForMultipleParameterState:(id)arg1 inParameter:(id)arg2 ;
+(BOOL)formatString:(id)arg1 containsParameterKey:(id)arg2 ;
-(NSString *)formatString;
-(NSArray *)parameterKeys;
-(void)setParameterKeys:(NSArray *)arg1 ;
-(id)initWithFormatString:(id)arg1 ;
-(id)buildContentWithParameters:(id)arg1 editableParameters:(id)arg2 parameterStates:(id)arg3 variableBeingEdited:(id)arg4 ;
-(void)itemizeFormatStringIfNeeded;
-(id)contentByEnumeratingSummaryWithParameterSlotBuilder:(/*^block*/id)arg1 ;
-(NSArray *)formatItems;
-(void)setFormatItems:(NSArray *)arg1 ;
@end

