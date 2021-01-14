/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class CPAnalytics, NSMutableIndexSet, NSString;

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination> {

	CPAnalytics* _cpAnalyticsInstance;
	NSMutableIndexSet* _startedSignpostIDs;

}

@property (assign,nonatomic,__weak) CPAnalytics * cpAnalyticsInstance;              //@synthesize cpAnalyticsInstance=_cpAnalyticsInstance - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * startedSignpostIDs;              //@synthesize startedSignpostIDs=_startedSignpostIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(CPAnalytics *)cpAnalyticsInstance;
-(void)_trackSignpostsStartForEvent:(id)arg1 ;
-(void)setCpAnalyticsInstance:(CPAnalytics *)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(NSMutableIndexSet *)startedSignpostIDs;
-(void)_checkSignpostsEndForEvent:(id)arg1 ;
-(void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3 ;
@end

