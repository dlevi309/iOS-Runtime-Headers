/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKAxisLabelDataSource;
#import <HealthUI/HealthUI-Structs.h>
@class NSNumber, NSCache;

@interface HKAxisLabelCache : NSObject {

	id<HKAxisLabelDataSource> _axisLabelDataSource;
	NSNumber* _axisLabelMaximumWidth;
	NSCache* _mainCache;

}

@property (nonatomic,retain) NSCache * mainCache;                                               //@synthesize mainCache=_mainCache - In the implementation block
@property (assign,nonatomic,__weak) id<HKAxisLabelDataSource> axisLabelDataSource;              //@synthesize axisLabelDataSource=_axisLabelDataSource - In the implementation block
@property (nonatomic,readonly) NSNumber * axisLabelMaximumWidth;                                //@synthesize axisLabelMaximumWidth=_axisLabelMaximumWidth - In the implementation block
-(void)invalidateCache;
-(id)init;
-(void)dealloc;
-(void)_handleTimeChangeNotification:(id)arg1 ;
-(id<HKAxisLabelDataSource>)axisLabelDataSource;
-(NSCache *)mainCache;
-(BOOL)_largeDistanceFromModelRange:(id)arg1 toStartCache:(id)arg2 orEndCache:(id)arg3 timeScope:(long long)arg4 ;
-(id)allAxisLabelsForRange:(id)arg1 isHorizontal:(BOOL)arg2 zoomScale:(double)arg3 timeScope:(long long)arg4 ;
-(void)enumerateAxisLabelsForTextInRange:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7 gridlineWidth:(double)arg8 timeScope:(long long)arg9 usingBlock:(/*^block*/id)arg10 ;
-(void)setAxisLabelDataSource:(id<HKAxisLabelDataSource>)arg1 ;
-(NSNumber *)axisLabelMaximumWidth;
-(void)setMainCache:(NSCache *)arg1 ;
@end

