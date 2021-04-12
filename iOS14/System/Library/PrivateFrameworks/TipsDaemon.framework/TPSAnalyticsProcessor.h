/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <libobjc.A.dylib/TPSAnalyticsProcessing.h>

@protocol TPSAnalyticsProcessorDataSource;
@class NSDate, TPSAnalyticsEventController, TPSDuetDataProvider, NSString;

@interface TPSAnalyticsProcessor : NSObject <TPSAnalyticsProcessing> {

	TPSAnalyticsEventController* _analyticsEventController;
	TPSDuetDataProvider* _duetDataProvider;
	NSString* _dateLastRunKey;
	id<TPSAnalyticsProcessorDataSource> _dataSource;

}

@property (nonatomic,readonly) TPSDuetDataProvider * duetDataProvider; 
@property (assign,nonatomic,__weak) id<TPSAnalyticsProcessorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSDate * dateLastRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)saveValue:(id)arg1 forKey:(id)arg2 ;
+(id)loadValueForKey:(id)arg1 class:(Class)arg2 ;
-(id)init;
-(TPSDuetDataProvider *)duetDataProvider;
-(id<TPSAnalyticsProcessorDataSource>)dataSource;
-(void)setDataSource:(id<TPSAnalyticsProcessorDataSource>)arg1 ;
-(void)resetAnalytics;
-(void)processAnalytics:(/*^block*/id)arg1 ;
-(void)setDateLastRun:(NSDate *)arg1 ;
-(NSDate *)dateLastRun;
-(void)setDuetDataProvider:(TPSDuetDataProvider *)arg1 ;
@end

