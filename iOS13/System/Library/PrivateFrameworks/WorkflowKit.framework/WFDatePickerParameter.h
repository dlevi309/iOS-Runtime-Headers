/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSDate;

@interface WFDatePickerParameter : WFParameter {

	long long _datePickerMode;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (assign,nonatomic) long long datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                  //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                  //@synthesize maximumDate=_maximumDate - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(long long)datePickerMode;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
@end

