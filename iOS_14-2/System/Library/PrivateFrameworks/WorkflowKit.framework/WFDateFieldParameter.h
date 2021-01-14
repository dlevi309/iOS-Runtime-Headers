/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFTextInputParameter.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter <WFParameterDialogProvider> {

	BOOL _detectsAllDayDates;
	BOOL _displaysAllDayString;
	BOOL _forcesAllDayDates;
	NSDateFormatter* _hintDateFormatter;
	NSString* _reactiveParameterKey;
	NSString* _hintDateMode;

}

@property (nonatomic,readonly) NSDateFormatter * hintDateFormatter;                   //@synthesize hintDateFormatter=_hintDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * hintDateMode;                               //@synthesize hintDateMode=_hintDateMode - In the implementation block
@property (nonatomic,readonly) NSString * reactiveParameterKey;                       //@synthesize reactiveParameterKey=_reactiveParameterKey - In the implementation block
@property (nonatomic,readonly) NSString * localizedIncompleteHintString; 
@property (nonatomic,readonly) BOOL timeOnlyMode; 
@property (nonatomic,readonly) BOOL dateOnlyMode; 
@property (nonatomic,readonly) BOOL detectsAllDayDates;                               //@synthesize detectsAllDayDates=_detectsAllDayDates - In the implementation block
@property (nonatomic,readonly) BOOL displaysAllDayString;                             //@synthesize displaysAllDayString=_displaysAllDayString - In the implementation block
@property (assign,nonatomic) BOOL forcesAllDayDates;                                  //@synthesize forcesAllDayDates=_forcesAllDayDates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)moduleSummaryAskVariableName;
-(id)initWithDefinition:(id)arg1 ;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(BOOL)timeOnlyMode;
-(BOOL)dateOnlyMode;
-(NSDateFormatter *)hintDateFormatter;
-(id)hintForState:(id)arg1 ;
-(NSString *)localizedIncompleteHintString;
-(void)setForcesAllDayDates:(BOOL)arg1 ;
-(id)datePickerConfiguration;
-(id)dateFormatterForConfiguration:(id)arg1 ;
-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1 ;
-(NSString *)reactiveParameterKey;
-(BOOL)detectsAllDayDates;
-(BOOL)displaysAllDayString;
-(BOOL)forcesAllDayDates;
-(NSString *)hintDateMode;
@end
