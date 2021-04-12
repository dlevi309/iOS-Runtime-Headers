/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFDynamicFormattingValue <NSObject>
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) id<HFStringGenerator> currentFormattedValue; 
@required
-(id)value;
-(id)observeFormattedValueChangesWithBlock:(/*^block*/id)arg1;
-(id<HFStringGenerator>)currentFormattedValue;

@end

