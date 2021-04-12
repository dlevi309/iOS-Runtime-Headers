/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UILabel.h>

@class HKValueRange;

@interface HKUIDateLabel : UILabel {

	BOOL _useUppercase;
	HKValueRange* _dateRange;

}

@property (nonatomic,readonly) HKValueRange * dateRange;              //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) BOOL useUppercase;                       //@synthesize useUppercase=_useUppercase - In the implementation block
+(id)dateStringForDateRange:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(BOOL)arg3 ;
+(id)_formattedTextFromDate:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(BOOL)arg3 ;
-(HKValueRange *)dateRange;
-(id)init;
-(void)setDateRange:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)_setDateRange:(id)arg1 ;
-(void)setDate:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)useUppercase;
-(void)setUseUppercase:(BOOL)arg1 ;
@end

