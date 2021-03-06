/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString;

@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger> {

	NSString* _domain;

}

@property (nonatomic,readonly) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLogger;
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 ;
-(void)logMetric:(id)arg1 ;
@end

