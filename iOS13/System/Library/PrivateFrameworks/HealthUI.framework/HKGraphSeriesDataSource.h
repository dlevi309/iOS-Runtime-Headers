/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<HKGraphSeriesDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKGraphSeriesDataSourceDelegate>)arg1 ;
-(void)invalidateCache;
-(id)cachedBlockForPath:(SCD_Struct_HK9)arg1 context:(id)arg2 ;
-(SCD_Struct_HK9)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(SCD_Struct_HK9)arg1 endPath:(SCD_Struct_HK9)arg2 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(SCD_Struct_HK9)arg1 endPath:(SCD_Struct_HK9)arg2 ;
-(long long)minimumZoom;
-(long long)maximumZoom;
-(void)setMinimumZoom:(long long)arg1 ;
-(void)setMaximumZoom:(long long)arg1 ;
@end

