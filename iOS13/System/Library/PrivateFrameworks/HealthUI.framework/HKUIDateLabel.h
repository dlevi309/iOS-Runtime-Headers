/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(HKValueRange *)dateRange;
-(void)setUseUppercase:(BOOL)arg1 ;
-(void)setDateRange:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)_setDateRange:(id)arg1 ;
-(void)setDate:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)useUppercase;
@end

