/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDomain:(id)arg1 ;
-(NSString *)domain;
-(void)logMetric:(id)arg1 ;
@end

