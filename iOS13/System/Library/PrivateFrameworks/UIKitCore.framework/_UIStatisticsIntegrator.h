/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIStatisticsIntegrator : NSObject {

	NSObject*<OS_dispatch_queue> _reportingQueue;

}
+(id)sharedInstance;
+(void)createSharedInstanceIfNecessary;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)setValue:(long long)arg1 forKey:(id)arg2 ;
-(void)resetDistributionForKey:(id)arg1 ;
-(void)resetDistributionToValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)resetValueForKey:(id)arg1 ;
-(void)incrementValueBy:(long long)arg1 forKey:(id)arg2 ;
-(void)batchRecord:(/*^block*/id)arg1 ;
@end

