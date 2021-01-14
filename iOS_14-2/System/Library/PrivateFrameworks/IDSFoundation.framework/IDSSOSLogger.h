/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString, IDSRateLimiter;

@interface IDSSOSLogger : NSObject <CUTMetricLogger> {

	NSString* _sosURLString;
	IDSRateLimiter* _rateLimiter;

}

@property (nonatomic,retain) NSString * sosURLString;                   //@synthesize sosURLString=_sosURLString - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * rateLimiter;              //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logger;
+(id)loggerWithURLString:(id)arg1 ;
-(IDSRateLimiter *)rateLimiter;
-(void)logMetric:(id)arg1 ;
-(id)initWithSOSURLString:(id)arg1 ;
-(NSString *)sosURLString;
-(void)setSosURLString:(NSString *)arg1 ;
-(void)setRateLimiter:(IDSRateLimiter *)arg1 ;
@end

