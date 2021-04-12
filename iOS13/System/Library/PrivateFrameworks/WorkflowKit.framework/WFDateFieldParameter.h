/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter {

	BOOL _detectsAllDayDates;
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
@property (assign,nonatomic) BOOL forcesAllDayDates;                                  //@synthesize forcesAllDayDates=_forcesAllDayDates - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)timeOnlyMode;
-(BOOL)dateOnlyMode;
-(NSDateFormatter *)hintDateFormatter;
-(id)hintForState:(id)arg1 ;
-(NSString *)localizedIncompleteHintString;
-(void)setForcesAllDayDates:(BOOL)arg1 ;
-(NSString *)reactiveParameterKey;
-(BOOL)detectsAllDayDates;
-(BOOL)forcesAllDayDates;
-(NSString *)hintDateMode;
@end

