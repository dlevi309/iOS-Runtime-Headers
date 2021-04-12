/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSDate, NSString, SKUIImageViewElement;

@interface SKUICounterViewElement : SKUIViewElement {

	double _changeRatePerSecond;
	long long _counterType;
	long long _dateFormatType;
	NSDate* _endDate;
	NSString* _numberFormat;
	long long _startValue;
	NSDate* _startValueDate;
	long long _stopValue;

}

@property (nonatomic,readonly) long long counterType;                                      //@synthesize counterType=_counterType - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * backgroundImageElement; 
@property (nonatomic,readonly) long long dateFormatType;                                   //@synthesize dateFormatType=_dateFormatType - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double changeRatePerSecond;                                 //@synthesize changeRatePerSecond=_changeRatePerSecond - In the implementation block
@property (nonatomic,readonly) NSString * numberFormat;                                    //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,readonly) NSDate * startValueDate;                                    //@synthesize startValueDate=_startValueDate - In the implementation block
@property (nonatomic,readonly) long long startValue;                                       //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) long long stopValue;                                        //@synthesize stopValue=_stopValue - In the implementation block
-(NSDate *)endDate;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)numberFormat;
-(SKUIImageViewElement *)backgroundImageElement;
-(long long)stopValue;
-(NSDate *)startValueDate;
-(double)changeRatePerSecond;
-(long long)startValue;
-(long long)counterType;
-(long long)dateFormatType;
-(long long)currentNumberValue;
@end

