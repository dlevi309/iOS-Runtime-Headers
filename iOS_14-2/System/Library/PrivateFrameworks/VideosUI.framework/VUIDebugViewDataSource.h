/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUIDebugViewDataSource : NSObject {

	NSArray* _metricsDataSource;
	NSArray* _defaultsDataSource;

}

@property (nonatomic,retain) NSArray * metricsDataSource;               //@synthesize metricsDataSource=_metricsDataSource - In the implementation block
@property (nonatomic,retain) NSArray * defaultsDataSource;              //@synthesize defaultsDataSource=_defaultsDataSource - In the implementation block
-(id)init;
-(NSArray *)metricsDataSource;
-(NSArray *)defaultsDataSource;
-(id)_createMetricsDataSource;
-(id)_createDefaultsDataSource;
-(void)setMetricsDataSource:(NSArray *)arg1 ;
-(void)setDefaultsDataSource:(NSArray *)arg1 ;
@end

