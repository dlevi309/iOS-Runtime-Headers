/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@protocol OS_os_log;
@class NSArray, NSObject, NSString;

@interface CPAnalyticsLogDestination : NSObject <CPAnalyticsDestination> {

	NSArray* _logEventMatchers;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) NSArray * logEventMatchers;              //@synthesize logEventMatchers=_logEventMatchers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(id)_logEventMatchersInConfiguration:(id)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(id)_descriptionComponentsForEvent:(id)arg1 forProperties:(id)arg2 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(NSArray *)logEventMatchers;
-(void)_logEvent:(id)arg1 withLabel:(id)arg2 shouldLogEventName:(BOOL)arg3 propertiesToLog:(id)arg4 publicPropertiesToLog:(id)arg5 ;
@end

