/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFDynamicFormattingValue.h>

@protocol HFStringGenerator;
@class NSString;

@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue> {

	id<HFStringGenerator> _currentFormattedValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) id<HFStringGenerator> currentFormattedValue;              //@synthesize currentFormattedValue=_currentFormattedValue - In the implementation block
-(id)value;
-(id)observeFormattedValueChangesWithBlock:(/*^block*/id)arg1 ;
-(id<HFStringGenerator>)currentFormattedValue;
-(id)initWithFormattedValue:(id)arg1 ;
@end

