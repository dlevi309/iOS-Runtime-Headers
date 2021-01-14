/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol TPSAnalyticsDataProviderDataSource;
@interface TPSAnalyticsDataProvider : NSObject {

	id<TPSAnalyticsDataProviderDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<TPSAnalyticsDataProviderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(unsigned long long)hintDisplayedCountForIdentifier:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id)bundleIDForIdentifier:(id)arg1 ;
-(id<TPSAnalyticsDataProviderDataSource>)dataSource;
-(id)displayTypeForIdentifier:(id)arg1 ;
-(void)setDataSource:(id<TPSAnalyticsDataProviderDataSource>)arg1 ;
-(id)contextForIdentifier:(id)arg1 ;
-(id)experimentCampID;
-(id)experimentID;
-(id)deliveryInfoVersion;
@end

