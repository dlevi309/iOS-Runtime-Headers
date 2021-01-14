/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class NSString;

@interface CPAnalyticsDevLogger : NSObject <CPAnalyticsDestination>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)disabled;
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
@end

