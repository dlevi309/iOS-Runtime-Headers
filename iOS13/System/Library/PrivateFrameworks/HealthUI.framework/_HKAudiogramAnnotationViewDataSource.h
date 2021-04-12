/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@class HKInteractiveChartDataFormatter, NSMutableArray, NSString;

@interface _HKAudiogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

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
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(BOOL)showSeparators;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(id)initWithFormatter:(id)arg1 ;
-(void)updateWithPointSelectionContexts:(id)arg1 ;
@end

