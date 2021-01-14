/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@class HKInteractiveChartDataFormatter, NSMutableArray, NSString;

@interface HKHistogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	HKInteractiveChartDataFormatter* _formatter;
	NSMutableArray* _keyValuePairs;

}

@property (nonatomic,readonly) HKInteractiveChartDataFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;                             //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKInteractiveChartDataFormatter *)formatter;
-(BOOL)showSeparators;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(id)initWithFormatter:(id)arg1 ;
-(void)updateWithPointSelectionContexts:(id)arg1 ;
@end

