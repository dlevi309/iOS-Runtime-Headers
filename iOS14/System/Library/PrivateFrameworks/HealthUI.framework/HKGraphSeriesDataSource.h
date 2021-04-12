/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKGraphSeriesDataSourceDelegate;
#import <HealthUI/HealthUI-Structs.h>
@interface HKGraphSeriesDataSource : NSObject {

	id<HKGraphSeriesDataSourceDelegate> _delegate;
	long long _minimumZoom;
	long long _maximumZoom;

}

@property (assign,nonatomic,__weak) id<HKGraphSeriesDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long minimumZoom;                                            //@synthesize minimumZoom=_minimumZoom - In the implementation block
@property (assign,nonatomic) long long maximumZoom;                                            //@synthesize maximumZoom=_maximumZoom - In the implementation block
-(void)invalidateCache;
-(id)init;
-(id)cachedBlockForPath:(SCD_Struct_HK12)arg1 context:(id)arg2 ;
-(id<HKGraphSeriesDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKGraphSeriesDataSourceDelegate>)arg1 ;
-(SCD_Struct_HK12)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK12)arg1 toPath:(SCD_Struct_HK12)arg2 priorityDelegate:(id)arg3 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(SCD_Struct_HK12)arg1 endPath:(SCD_Struct_HK12)arg2 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(SCD_Struct_HK12)arg1 endPath:(SCD_Struct_HK12)arg2 ;
-(long long)minimumZoom;
-(long long)maximumZoom;
-(void)setMinimumZoom:(long long)arg1 ;
-(void)setMaximumZoom:(long long)arg1 ;
@end

