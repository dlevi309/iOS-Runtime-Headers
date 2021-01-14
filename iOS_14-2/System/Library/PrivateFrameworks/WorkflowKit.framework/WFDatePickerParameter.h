/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSDate, NSString;

@interface WFDatePickerParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {

	long long _datePickerMode;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                  //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                  //@synthesize maximumDate=_maximumDate - In the implementation block
+(id)moduleSummaryDateFormatter;
-(id)moduleSummarySlotForState:(id)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(long long)datePickerMode;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
@end

