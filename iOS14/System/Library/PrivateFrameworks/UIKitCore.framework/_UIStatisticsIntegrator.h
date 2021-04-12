/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIStatisticsIntegrator : NSObject {

	NSObject*<OS_dispatch_queue> _reportingQueue;

}
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
+(void)createSharedInstanceIfNecessary;
-(id)init;
-(void)setValue:(long long)arg1 forKey:(id)arg2 ;
-(void)incrementValueBy:(long long)arg1 forKey:(id)arg2 ;
-(void)recordDistributionValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)resetDistributionForKey:(id)arg1 ;
-(void)resetValueForKey:(id)arg1 ;
-(void)resetDistributionToValue:(double)arg1 forKey:(id)arg2 ;
-(void)batchRecord:(/*^block*/id)arg1 ;
@end

