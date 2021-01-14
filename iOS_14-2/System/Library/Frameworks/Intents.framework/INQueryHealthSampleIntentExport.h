/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, HKUnit;


@protocol INQueryHealthSampleIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * recordDates; 
@property (nonatomic,copy) HKUnit * unit; 
@property (assign,nonatomic) long long questionType; 
@property (nonatomic,copy) NSArray * thresholdValues; 
@property (assign,nonatomic) long long expectedResultType; 
@required
-(id)init;
-(long long)objectType;
-(NSArray *)recordDates;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1;
-(void)setObjectType:(long long)arg1;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1;
-(void)setRecordDates:(id)arg1;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(id)arg1;
-(HKUnit *)unit;
-(void)setUnit:(id)arg1;

@end

